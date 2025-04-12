# ea-sports-simulation


# EA Sports Inventory Patch Simulation 🎮

A C++ game development simulation based on EA Sports' College Football series. This project was completed as part of the [EA x Forage Virtual Experience Program](https://www.theforage.com/virtual-internships/prototype/K7BqZHM8iJGCJ6nt8/EA-Software-Engineering) and focuses on identifying and fixing a real-world bug in the game's inventory system.

---

## 🚀 Project Overview

In this simulation, I worked as a Junior Software Engineer on EA’s College Football development team. The goal was to patch a live issue in the in-game inventory system and optimize the codebase for maintainability and performance.

---

## 🐞 Bug Fix: Ghost Items in Inventory

### ❌ Problem
When an item's quantity reached zero, it remained in the inventory list — cluttering the UI and causing potential confusion.

### ✅ Solution
- Rewrote the `remove_item()` function to **fully delete items** when their quantity reached 0.
- Used `std::vector` and `std::unique_ptr` to modernize memory management and eliminate fixed array limits.
- Implemented `std::find_if` and lambda expressions for clean, efficient item lookup.

---

## 🧠 Technical Highlights

- ✅ **C++ STL** – used `vector`, `unique_ptr`, and `algorithm`
- ✅ **Object-Oriented Design** – modular class definitions
- ✅ **Memory Safety** – smart pointers over manual memory management
- ✅ **Code Optimization** – transitioned from C-style arrays to modern C++
- ✅ **Bug Fixing Workflow** – mimicking real-world software patch development

---

## 🧩 File Structure

```bash
.
├── task-4-starter.cpp     # Main source file with inventory system bug fix
└── README.md              # You're here!
