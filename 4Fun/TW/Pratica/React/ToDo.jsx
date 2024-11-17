import React, { useState } from 'react';

function Todo() {
    const [todos, setTodos] = useState([]);
    const [newTodo, setNewTodo] = useState('');
    const [dueDate, setDueDate] = useState('');

    function addTodo() {
        const currentDate = new Date();
        setTodos([...todos, { text: newTodo, completed: false, addedAt: currentDate, dueDate }]);
        setNewTodo('');
        setDueDate('');
    };

    function toggleTodo(index) {
        const newTodos = [...todos];
        newTodos[index].completed = !newTodos[index].completed;
        setTodos(newTodos);
    };

    function removeCompleted() {
        setTodos(todos.filter(todo => !todo.completed));
    };

    const sortedTodos = todos.sort((a, b) => new Date(a.addedAt) - new Date(b.addedAt));

    return (
        <div className="App">
            <h1>To-Do List</h1>
            <div>
                <input
                    type="text"
                    value={newTodo}
                    onChange={(e) => setNewTodo(e.target.value)}
                    placeholder="Add a new task"
                />
                <input
                    type="datetime-local"
                    value={dueDate}
                    onChange={(e) => setDueDate(e.target.value)}
                    placeholder="Set due date"
                />
                <button onClick={addTodo}>Add</button>
            </div>
            <button onClick={removeCompleted}>Remove Completed</button>
            <ul>
                {sortedTodos.map((todo, index) => (
                    <li key={index} style={{ textDecoration: todo.completed ? 'line-through' : 'none' }}>
                        <input
                            type="checkbox"
                            checked={todo.completed}
                            onChange={() => toggleTodo(index)}
                        />
                        {todo.text}
                        <span> (Added at: {todo.addedAt.toLocaleString()})</span>
                        {todo.dueDate && <span> (Due: {new Date(todo.dueDate).toLocaleString()})</span>}
                    </li>
                ))}
            </ul>
        </div>
    );
}

export default Todo;
