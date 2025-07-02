# 💰 CS50 Finance

A full-stack stock trading simulation platform built for [CS50x 2024 Problem Set 9](https://cs50.harvard.edu/x/2024/psets/9/finance/). It allows users to buy and sell stocks, get real-time quotes, and manage their portfolios with secure login and account history tracking.

## 🔧 Tech Stack

- **Python 3**
- **Flask** (Backend framework)
- **SQLite** (Database)
- **HTML/CSS** (Frontend styling)
- **JavaScript** (Client interactivity)
- **Flask-Session**, **Werkzeug**, and more

## 🚀 Features

- Register and log in securely  
- Real-time stock quote retrieval  
- Buy and sell stocks  
- Track account history and portfolio value  
- Input validation and helpful error messages  

## 🗂️ Folder Structure

finance/
├── app.py # Main Flask app
├── helpers.py # API helpers and utilities
├── finance.db # SQLite database
├── flask_session/ # Server-side session files
├── static/ # CSS/JS static assets
├── templates/ # Jinja HTML templates
├── requirements.txt # Python dependencies

markdown
Copy
Edit

## ▶️ Getting Started

1. Clone the repo:
git clone https://github.com/itzPotato/CS50_Codes.git
cd CS50_Codes/finance

cpp
Copy
Edit

2. Create a virtual environment & install dependencies:
python3 -m venv venv
source venv/bin/activate # On Windows: venv\Scripts\activate
pip install -r requirements.txt

arduino
Copy
Edit

3. Set environment variables & run the app:
export FLASK_APP=app.py
export FLASK_ENV=development
export API_KEY=your_iex_api_key_here
flask run
