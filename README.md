# oop-project
# ✈️ Airline Reservation System (C++ OOP Project)

This is a console-based **Airline Reservation System** developed in **C++** using Object-Oriented Programming (OOP) principles.

The system allows users to:
- Register for flights (National & International)
- View available flight schedules
- Book flights
- Generate flight tickets with details and charges

---

## 📌 Features

- 🔹 **OOP Concepts**: Utilizes classes, inheritance, encapsulation, and multiple inheritance.
- 🔹 **National & International Flights**: Offers separate options with unique schedules and destinations.
- 🔹 **Ticket Generation**: After booking, a printable ticket is generated showing customer details and charges.
- 🔹 **Interactive Menu**: Simple console-based user interface for interaction.

---

## 🧱 Classes Used

| Class         | Description                                     |
|---------------|-------------------------------------------------|
| `Details`     | Stores customer info like name, age, and gender |
| `National`    | Manages national flight booking                 |
| `International` | Manages international flight booking           |
| `Reservation` | Handles user registration (inherits Details, National, International) |
| `Ticket`      | Generates and displays ticket (inherits Reservation) |
| `Managment`   | Entry point of the system and handles the menu  |

---

## 💻 Technologies Used

- Language: **C++**
- IDE: **Dev C++** or **Visual Studio Code** (with MinGW)
- Platform: Console-based
g++ main.cpp -o airline
./airline
