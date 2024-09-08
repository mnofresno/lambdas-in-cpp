# Lambdas in C++

## Description
This project is a small experiment showcasing the use of lambda functions in a Qt/C++ application. It serves as a practical demonstration of how lambdas can simplify code and enhance functionality within a graphical user interface.

## Features
- Demonstrates the creation and usage of lambda functions in C++.
- Integrates with the Qt framework to create a simple GUI application.
- Uses custom user data to store and manage lambda functions.

## File Structure
.
├── lambdas.pro          # Qt project file
├── main.cpp             # Main application entry point
├── mainwindow.cpp       # Implementation of the MainWindow class
├── mainwindow.h         # Header file for the MainWindow class
└── mainwindow.ui        # UI definition for the MainWindow

## Getting Started

### Prerequisites
- Qt 5 or higher
- A C++ compiler that supports C++11 or later

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/lambdas-in-cpp.git
   cd lambdas-in-cpp
   ```

2. Open the project in Qt Creator or build using qmake:
   ```bash
   qmake lambdas.pro
   make
   ```

3. Run the application:
   ```bash
   ./lambdas-in-cpp
   ```

## Usage
- Upon running the application, it will display a window.
- The application utilizes lambda functions to process and display data dynamically.
- You can modify the input to the lambda functions in `main.cpp` to see different outputs.

## Contributing
Contributions are welcome! Please fork the repository and submit a pull request with your improvements or features.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
