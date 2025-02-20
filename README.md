# FDF (Fil de Fer) Project Roadmap

## 🏔 Overview
The **FDF project** is a graphical programming task that involves rendering a **3D wireframe model** of a landscape from a given `.fdf` file using **MiniLibX**. The project covers **file parsing, coordinate transformation, isometric projection, and advanced rendering techniques like Xiaolin Wu's anti-aliased lines.**

---
## **🚀 Phase 1: Project Initialization**

### 1.1 Understanding the Scope
- **Objective**: Read `.fdf` file and render a 3D landscape in isometric projection.
- **Key Features**:
  - File parsing and data structuring
  - 3D-to-2D transformation
  - Anti-aliased rendering with Xiaolin Wu’s algorithm
  - User interaction (zoom, rotate, move)

### 1.2 Setting Up the Environment
- Install **MiniLibX** and ensure it is correctly linked.
- Set up **Git repository** and project structure:
  ```
  ├── src/          # Source files
  ├── include/      # Header files
  ├── assets/       # Resources (e.g., .fdf files)
  ├── Makefile      # Compilation automation
  ├── README.md     # Documentation
  ```
- Configure **Makefile** with flags `-Wall -Wextra -Werror`.

---
## **💻 Phase 2: Core Development**

### 2.1 File Parsing
- Open and read `.fdf` file line by line.
- Convert data into a structured **2D array** or **linked list**.
- Validate data integrity and manage errors.

### 2.2 Data Representation
- Define key structures:
  ```c
  typedef struct s_point {
      int x;
      int y;
      int z;
  } t_point;

  typedef struct s_map {
      int width;
      int height;
      t_point **points;
  } t_map;
  ```
- Allocate and free memory efficiently.

### 2.3 Isometric Projection
- Apply transformation formula:
  ```c
  iso_x = (x - y) * cos(θ);
  iso_y = (x + y) * sin(θ) - z;
  ```
- Adjust scaling and translation for correct rendering.

### 2.4 Rendering Engine
- Implement **Bresenham's Algorithm** for line drawing.
- Implement **Xiaolin Wu’s Algorithm** for anti-aliasing:
  - Determine intensity based on pixel proximity.
  - Use fractional pixel blending for smooth lines.

### 2.5 User Interaction
- Handle keyboard & mouse inputs with MiniLibX.
- Implement controls:
  - **Zoom** in/out
  - **Rotate** around axes
  - **Move** model
  - **Exit** (ESC key)

---
## **🎨 Phase 3: Advanced Features**

### 3.1 Alternative Projections
- Implement **parallel projection** as a toggle option.
- Allow switching between **isometric and perspective views**.

### 3.2 Color Mapping
- Assign colors based on **altitude values** to enhance depth perception.

### 3.3 Performance Optimization
- **Reduce unnecessary calculations** during rendering.
- Optimize **memory usage** for larger datasets.
- Improve **event handling** efficiency.

---
## **🛠 Phase 4: Testing & Documentation**

### 4.1 Testing
- Develop **unit tests** for key functions.
- Test various `.fdf` files (small & large maps, edge cases).
- Ensure **no memory leaks** using `valgrind`.

### 4.2 Documentation
- Add **detailed inline comments** to the code.
- Create a **README.md** with:
  - Installation & compilation steps
  - Usage instructions
  - Example screenshots of rendered maps

---
## **📦 Phase 5: Finalization & Submission**

### 5.1 Code Review & Refactoring
- Ensure **code modularity** with separate functions for parsing, rendering, and interactions.
- Perform **peer review** for optimization.

### 5.2 Final Testing
- Conduct final validation with multiple test cases.
- Confirm smooth performance and stability.

### 5.3 Repository Cleanup & Submission
- Verify all necessary files are included.
- Push final version to **Git repository**.

---
## 🎯 **By following this roadmap, you will successfully implement a fully functional and visually enhanced FDF project with high-quality rendering and user interaction features! 🚀**

