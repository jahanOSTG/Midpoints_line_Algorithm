# Mid-Point Line Drawing Algorithm

The **Mid-Point Line Drawing Algorithm** is used in computer graphics to draw straight lines efficiently by making integer calculations. It determines the next point to plot based on the decision parameter `D`, calculated at each step. The algorithm uses the symmetry of the line to minimize calculations.

## Algorithm Steps

### Given:
- Starting coordinates: `(X0, Y0)`
- Ending coordinates: `(Xn, Yn)`

---

### Step 1: Calculate ΔX and ΔY

First, calculate the differences between the starting and ending points:

- `DX = Xn - X0`
- `DY = Yn - Y0`

These values represent the differences in the X and Y coordinates of the starting and ending points.

---

### Step 2: Calculate the Initial Decision Parameter

The initial decision parameter `Dinitial` and the change in the decision parameter `delD` are calculated as:

- `Dinitial = 2 * DY - DX`
- `delD = 2 * (DY - DX)`

---

### Step 3: Decision Parameter Cases

Based on the value of the decision parameter `D`, we decide whether to increment the X or Y coordinates:

#### **Case 1: If `D < 0`**
- `X = X + 1`
- `Dnew = D + 2 * DY`

#### **Case 2: If `D ≥ 0`**
- `X = X + 1`
- `Y = Y + 1`
- `Dnew = D + delD`

---

### Step 4: Repeat Until the End Point is Reached

Keep repeating Step 3, adjusting `X`, `Y`, and `D` according to the decision parameter `D`, until you reach the ending point `(Xn, Yn)`.

For each new value of `Dnew`, apply the corresponding case to find the next coordinates.

---


## Documentation:

For a more detailed explanation of the Mid-Point Line Drawing Algorithm, check out the full documentation:

[Click here for Documentation](https://drive.google.com/file/d/137tfN0MXCmLpWLV8MskEvt_RFV_N5F4w/view?usp=sharing)
