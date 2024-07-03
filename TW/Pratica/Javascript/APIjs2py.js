document.getElementById('translate-form').addEventListener('submit', async function(event) {
    event.preventDefault();

    // Ottieni i valori dai campi del modulo
    const jsCode = document.getElementById('js-code').value;
    const strictness = document.getElementById('strictness').value;
    const pythonVersion = document.getElementById('python-version').value;
    const useExternalLibs = document.getElementById('use-external-libs').checked;

    // Crea il body della richiesta
    const requestBody = {
        js_code: jsCode,
        strictness: strictness,
        python_version: pythonVersion,
        use_external_libs: useExternalLibs,
    };

    try {
        // Effettua la chiamata POST all'API
        const response = await fetch('https://api.example.com/js2py/translate/', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify(requestBody)
        });

        // Verifica se la risposta è andata a buon fine
        if (!response.ok) {
            throw new Error('Errore nella chiamata all\'API');
        }

        // Ottieni il risultato della traduzione
        const result = await response.json();

        // Mostra il risultato nella pagina
        document.getElementById('result').textContent = JSON.stringify(result, null, 2);
    } catch (error) {
        // Gestisci eventuali errori
        document.getElementById('result').textContent = 'Errore: ' + error.message;
    }
});
