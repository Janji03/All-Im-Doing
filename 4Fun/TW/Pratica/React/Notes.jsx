import React, { useState } from "react";

function Notes() {
    const [noteToEdit, setNoteToEdit] = useState(null);
    const [title, setTitle] = useState("");
    const [content, setContent] = useState("");
    const [notes, setNotes] = useState([]);

    function handleInputChange(event) {
        const { name, value } = event.target;
        if (name === "title") {
            setTitle(value);
        } else if (name === "content") {
            setContent(value);
        }
    }

    function addOrUpdateNote(event) {
        event.preventDefault();

        if (noteToEdit !== null) {
            const updatedNotes = [...notes];
            updatedNotes[noteToEdit] = { title: title, content: content };
            setNotes(updatedNotes);
            setNoteToEdit(null); 
        } else {
            const newNote = { title: title, content: content };
            setNotes([...notes, newNote]);
        }

        setTitle("");
        setContent("");
    }

    function startEditing(index) {
        setNoteToEdit(index);
        setTitle(notes[index].title);
        setContent(notes[index].content);
    }

    function cancelEditing() {
        setNoteToEdit(null);
        setTitle("");
        setContent("");
    }

    function removeNote(index) {
        const newNotes = notes.filter((_, i) => i !== index);
        setNotes(newNotes);

        if (noteToEdit === index) {
            cancelEditing();
        }
    }

    return (
        <div>
            <form onSubmit={addOrUpdateNote}>
                <input
                    type="text"
                    name="title"
                    placeholder="Insert title"
                    value={title}
                    onChange={handleInputChange}
                />
                <textarea
                    name="content"
                    placeholder="Insert content"
                    value={content}
                    onChange={handleInputChange}
                ></textarea>
                {noteToEdit !== null ? (
                    <div>
                        <button type="submit">Save Changes</button>
                        <button type="button" onClick={cancelEditing}>Cancel</button>
                    </div>
                ) : (
                    <button type="submit">Save Note</button>
                )}
            </form>

            <div>
                <h2>Notes</h2>
                <ul>
                    {notes.map((note, index) => (
                        <li key={index}>
                            <h3>{note.title}</h3>
                            <p>{note.content.substring(0, 30)}</p>
                            <button onClick={() => startEditing(index)}>Edit</button>
                            <button onClick={() => removeNote(index)}>Delete</button>
                        </li>
                    ))}
                </ul>
            </div>
        </div>
    );
}

export default Notes;
