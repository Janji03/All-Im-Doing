import React, { useState } from 'react';

function TextInput () {
  const [text, setText] = useState('');

  function handleChange (e) {
    const inputText = e.target.value;
    if (inputText.length <= 300) {
      setText(inputText);
    } else {
        alert('Hai finito i caratteri disponibili')
    }
  };

  const wordCount = text.split(/\s+/).filter(word => word).length;
  const remainingCharacters = 300 - text.length;

  return (
    <>
        <h1>Input testuale</h1>
        <hr/>
        <div style={{ maxWidth: '500px' }}>
        <textarea
            value={text}
            onChange={handleChange}
            rows="6"
            style={{ width: '100%', padding: '10px', boxSizing: 'border-box' }}
        />
        <div>
            <p>Caratteri: {text.length}</p>
            <p>Parole: {wordCount}</p>
            <p>Caratteri rimanenti: {remainingCharacters}</p>
        </div>
        </div>
    </>
  );
};

export default TextInput;
