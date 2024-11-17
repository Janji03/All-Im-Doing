import React, { useState } from 'react';

function Gallery({ images }) {
    const [index, setIndex] = useState(0);

    function prevImg() {
        setIndex(++index % images.length);
    }

    function nextImg() {
        setIndex(--index % images.length);
    }

    return(
        <>
            <button onClick={prevImg}>Indietro</button>
            <div>
                <h1>{images[index].title}</h1>
                <p>{images[index].description}</p>
                <img src={images[index].url}/>
            </div>
            <button onClick={nextImg}>Avanti</button>
        </>
    )
}

export default Gallery;