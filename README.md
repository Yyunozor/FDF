# Roadmap for the Ultimate FDF Project

## **Objective**

The FDF project involves creating a 3D wireframe representation of a landscape using line rendering techniques. The goal is to produce a visually appealing, highly interactive program that adheres to the Norm and incorporates advanced graphical features.

---

## **1. Preparation and Foundation**

### **1.1 Analyze Project Requirements**

- Fully understand the objectives, deliverables, and evaluation criteria outlined in the FDF subject file.
- Identify constraints such as memory usage, adherence to the Norm, and the required graphical output.

### **1.2 Set Up Development Environment**

- Install and configure:
    - MiniLibX (MLX) for graphical rendering.
    - A C compiler (preferably gcc or clang).
    - Norminette for checking Norm compliance.
- Create a robust Makefile with the following targets:
    - `all`
    - `clean`
    - `fclean`
    - `re`
- Include the Libft library if needed, ensuring seamless integration.

### **1.3 Study Required Concepts**

- Understand key algorithms:
    - **Xiaolin Wu's line algorithm** (anti-aliased rendering).
    - **Bresenham's line algorithm** (for comparison and simpler scenarios).
- Review projection techniques:
    - **Isometric projection** for the primary 3D visualization.
    - **Orthographic projection** as an optional feature for alternative views.
- Study MiniLibX functionalities:
    - Window management.
    - Pixel drawing.
    - Event handling (keyboard and mouse).

---

## **2. Algorithm Design**

### **2.1 Line Drawing Algorithms**

- Implement **Xiaolin Wu's line algorithm** for smooth, anti-aliased line rendering.
- Develop a fallback using **Bresenham's algorithm** for performance-critical scenarios.
- Optimize both algorithms for edge cases (e.g., steep slopes, very long lines).

### **2.2 Projection Techniques**

- Implement **isometric projection** as the default.
- Add support for switching to **orthographic projection** for an alternative flat view.
- Create dynamic projection adjustment (zoom, rotation, and scaling).

### **2.3 Color Management**

- Map height values to a gradient color scale for visual depth.
- Include options for user-defined color schemes.
- Bonus: Add shading effects based on light sources or slope orientation.

### **2.4 Optimization Techniques**

- Use precomputed transformation matrices for efficiency.
- Reduce redundant calculations by batching rendering operations.
- Explore fixed-point arithmetic to improve performance.

---

## **3. Rendering Pipeline**

### **3.1 Map Parsing**

- Read the input map file and convert it into a 2D array of points.
- Parse height values and normalize them for consistent scaling.
- Handle invalid or malformed map files gracefully (provide error messages).

### **3.2 3D Wireframe Generation**

- Transform the 2D grid into 3D points using projection matrices.
- Render the landscape using line-drawing algorithms.

### **3.3 Advanced Rendering Features**

- **Smooth Terrain Visualization**:
    - Use anti-aliasing for lines.
    - Bonus: Add terrain smoothing with interpolated points.
- **Dynamic View Transformations**:
    - Enable zooming, panning, and rotation.
    - Allow users to reset the view to a default state.

---

## **4. User Interaction**

### **4.1 Keyboard Controls**

- Implement intuitive controls for:
    - **Arrow keys**: Rotate the map.
    - `+`/: Zoom in/out.
    - `R`: Reset the view.

### **4.2 Mouse Interaction**

- Add drag-and-rotate functionality using the mouse.
- Use the mouse scroll wheel for zooming.

### **4.3 Custom Features**

- Include a grid overlay toggle.
- Add an optional mini-map to show the full terrain.
- Bonus: Provide an interface for loading custom map files dynamically.

---

## **5. Performance Optimization**

### **5.1 Efficient Rendering**

- Use double buffering to avoid screen tearing.
- Minimize draw calls by batching.

### **5.2 Memory Management**

- Ensure all dynamically allocated memory is freed correctly.
- Use tools like Valgrind to detect and fix memory leaks.

### **5.3 Debugging and Testing**

- Write test cases for:
    - Map parsing.
    - Projection calculations.
    - Rendering output.
- Log performance metrics to identify bottlenecks.

---

## **6. Documentation and Submission**

### **6.1 Documentation**

- Write a comprehensive README file covering:
    - Features.
    - Usage instructions.
    - Code structure.
    - Algorithms used.
- Comment the code thoroughly for readability.

### **6.2 Testing and Peer Review**

- Test rigorously on various map files (including edge cases).
- Conduct peer reviews for feedback and improvement.

### **6.3 Final Submission**

- Ensure the project is Norm-compliant.
- Verify all files are correctly included in the Git repository.

---

## **7. Bonus Features**

### **7.1 Enhanced Graphics**

- Add lighting effects (e.g., flat shading or Gouraud shading).
- Implement texture mapping for a realistic look.

### **7.2 Interactive Enhancements**

- Include animations (e.g., wave effects or terrain deformation).
- Add an option to switch between different rendering styles (e.g., wireframe, filled polygons).

### **7.3 Export Features**

- Allow users to save rendered images as PNG files.
- Bonus: Support exporting the 3D model in a standard format (e.g., OBJ).

---

## **8. Project Skeleton**

```
FDF_Project/
|
|-- src/
|   |-- main.c       # Entry point of the application
|   |-- render.c     # Rendering functions
|   |-- events.c     # Event handling (keyboard, mouse)
|   |-- parser.c     # Map parsing logic
|   |-- utils.c      # Utility functions (e.g., color handling)
|
|-- include/
|   |-- fdf.h        # Header file with all function prototypes and macros
|
|-- lib/
|   |-- libft/       # Your Libft library
|
|-- Makefile         # Compilation rules
|-- README.md        # Documentation
```

---

## **9 Additional Resources**

- [MiniLibX Documentation](https://harm-smits.github.io/42docs/libs/minilibx).
- [Xiaolin Wu's Line Algorithm](https://en.wikipedia.org/wiki/Xiaolin_Wu%27s_line_algorithm).
- [Bresenham's Line Algorithm](https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm).
- [Isometric Projection Explanation](https://gamedevelopment.tutsplus.com/tutorials/creating-isometric-worlds-a-primer-for-game-developers--cms-28392).

---