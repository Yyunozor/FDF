# FDF - Wireframe Model Renderer

## 📖 Introduction

Welcome to the **FDF** project! This journey into computer graphics will have you creating a program that renders 3D landscapes as wireframe models. This is a visually striking and intellectually rewarding project where you'll delve into advanced C programming, graphical rendering techniques, and algorithmic thinking.

Through the **FDF** project, you will learn to:

- Parse structured input data to represent 3D landscapes.
- Use mathematical transformations to project 3D points onto a 2D plane.
- Master the **MiniLibX** graphics library for rendering and user interaction.
- Optimize performance and implement user-friendly features.

---

## 🛠️ Key Concepts

### 1. **Wireframe Rendering**

A wireframe model is a skeletal representation of a 3D object, consisting of points (vertices) connected by lines (edges). Key principles include:

- **3D to 2D Projection**: Using mathematical transformations to map 3D coordinates to a 2D plane while preserving perspective and relative proportions.
- **Isometric Projection**: A popular method for rendering 3D objects, maintaining equal scales along all three axes.

### 2. **MiniLibX**

**MiniLibX** is a lightweight graphics library designed for educational purposes. It simplifies the creation of graphical programs by providing:

- **Window Management**: Create and manage application windows.
- **Pixel Manipulation**: Draw individual pixels, lines, and shapes.
- **Event Handling**: Manage keyboard and mouse inputs.
- **Image Buffers**: Store and render pixel data efficiently.

### 3. **Coordinate Transformations**

Transformations are at the heart of 3D rendering. Key transformations include:

- **Translation**: Shifting an object in 3D space.
- **Rotation**: Rotating an object around the x, y, or z-axis.
- **Scaling**: Adjusting the size of an object.

The isometric projection formula:

\[ x' = x \cdot \cos(\theta) - y \cdot \sin(\theta) \]
\[ y' = (x \cdot \sin(\theta) + y \cdot \cos(\theta)) - z \]

### 4. **Event Handling and Interaction**

Your program will respond to user inputs, such as:

- **Keyboard Inputs**: For zooming, rotating, and panning.
- **Mouse Inputs** (Bonus): For intuitive interactions like dragging and zooming.

---

## 🌟 Features and Bonuses

### **Mandatory Features**
- Parse and render wireframe landscapes from input files.
- Implement isometric projection.
- Provide basic user controls for zooming, panning, and rotating.
- Manage memory effectively to handle large input files without leaks.

### **Bonus Features**
- Additional projections (e.g., perspective, parallel).
- Dynamic color gradients based on height values.
- Mouse support for panning and zooming.
- Smooth animations for transitions and transformations.

---

## 🗺️ Roadmap

### **1. Setup and MiniLibX Mastery**
- Install and test **MiniLibX**.
- Learn to create a window, draw basic shapes, and handle keyboard events.
- 🔍 **Milestone**: Render a static image with MiniLibX.

### **2. File Parsing**
- Implement a parser to read input files containing 3D grid data.
  - Handle irregular or malformed input gracefully.
  - Convert parsed data into a matrix of vertices.
- 🔍 **Milestone**: Successfully parse and display sample input data.

### **3. Coordinate Transformations**
- Implement functions for:
  - Translating vertices.
  - Rotating around the x, y, and z-axes.
  - Scaling for zooming in and out.
- 🔍 **Milestone**: Display a transformed wireframe model.

### **4. Rendering Wireframe Models**
- Implement **Bresenham's Line Algorithm** for drawing edges.
- Optimize rendering for large datasets.
- 🔍 **Milestone**: Render a fully connected 3D grid as a 2D wireframe.

### **5. Event Handling**
- Map keyboard inputs to transformations.
  - Arrow keys: Pan.
  - `+` / `-`: Zoom.
  - `R`: Reset view.
- 🔍 **Milestone**: Dynamic interaction with the wireframe.

### **6. Bonus Features**
- Implement mouse controls for panning and zooming.
- Add color gradients or texture mapping.
- Provide smooth transitions between transformations.
- 🔍 **Milestone**: Enhance usability and visual appeal.

---

## 🚀 Execution Instructions

### Compilation

1. Clone the repository:
   ```bash
   git clone <repository_url>
   cd fdf
   ```
2. Compile the project using the provided Makefile:
   ```bash
   make
   ```

### Running the Program

Execute the program with a valid input file:
```bash
./fdf maps/<filename>.fdf
```

### Controls

| Key         | Action               |
|-------------|----------------------|
| `Arrow Keys`| Pan                 |
| `+` / `-`   | Zoom                |
| `R`         | Reset View          |
| `ESC`       | Exit Program        |

---

## ✅ Evaluation Checklist

- [ ] Input file parsing is robust.
- [ ] Wireframe is rendered using isometric projection.
- [ ] User controls (zoom, pan, rotate) function as expected.
- [ ] Memory management ensures no leaks.
- [ ] Bonus features implemented (optional).

---

## 🌟 Resources

- [MiniLibX Documentation](https://github.com/42Paris/minilibx-linux)
- [FDF Subject PDF](en.subject_FDF.pdf)
- [Learn OpenGL Concepts](https://learnopengl.com)

---

Feel free to suggest edits or additional details to tailor this README to your needs!
