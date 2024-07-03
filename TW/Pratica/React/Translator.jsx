import React, { useState } from 'react';

function Translator() {
    const [code, setCode] = useState("");
    const [strictness, setStrictness] = useState(0);
    const [version, setVersion] = useState("");
    const [libs, setLibs] = useState(false);
    const [output, setOutput] = useState("");
    const [error, setError] = useState("");

    function js2py(event) {
        event.preventDefault();

        const URI = "https://api.example.com/js2py/translate/"
        const requestBody = {
            js_code: code,
            strictness: strictness,
            python_version: version,
            use_external_libs: libs,
        }
        
        const request = {
            method: "POST",
            headers: { "Content-Type": "application/json" },
            body: JSON.stringify(requestBody),
        }
        
        fetch(URI, request)
            .then((res) => {
                if (res.ok) return res.json();
                if (res.status === 400) throw new Error("Errore: Richiesta non valida");
                if (res.status === 404) throw new Error("Errore: Risorsa non trovata");
                if (res.status === 500) throw new Error("Errore interno del server");
                if (res.status === 502) throw new Error("Errore: Bad Gateway");
                throw new Error("Errore: risposta non valida");
            })
            .then((data) => {
                setOutput(data);
                setError("");
            })
            .catch((err) => {
                setError(err.message);
            });
    }

    function copyToClipboard() {
        navigator.clipboard.writeText(output);
    }

    return(
        <>
            <h1>Traduttore</h1>
            <form onSubmit={js2py} >
                <label>Codice</label>
                <textarea value={code} onChange={(e) => setCode(e.target.value)} />
                <label>Strictness</label>
                <input type="number" value={strictness} onChange={(e) => setStrictness(e.target.value)} />
                <label>Versione</label>
                <input type="text" value={version} onChange={(e) => setVersion(e.target.value)} />
                <label>Librerie esterne</label>
                <input type="checkbox" value={libs} onChange={(e) => setLibs(e.target.checked)} />
                <button type="submit">Traduci</button>
            </form>
            {output && (
                <div>
                    <h2>Output Python</h2>
                    <pre>{output}</pre>
                    <button onClick={copyToClipboard}>Copia Output</button>
                </div>
            )}

            {error && (
                <div>
                    <h2>Errore</h2>
                    <p>{error}</p>
                </div>
            )}
        </>
    )
}

export default Translator;