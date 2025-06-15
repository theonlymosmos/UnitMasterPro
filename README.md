### **Project Name: "UnitMaster Pro"**  
*(A professional name highlighting the program's unit conversion capabilities.)*  

---

### **Project Overview**  
A **C++ Unit Converter** that transforms between different measurement systems:  
- **Time**: Seconds → Hours, Minutes, Seconds  
- **Distance**: Centimeters → Kilometers, Meters, Centimeters  
- **Temperature**: Fahrenheit → Celsius, Kelvin  

---

### **Key Features**  
1. **Interactive Menu**  
   - Clear options for time, distance, and temperature conversions.  
2. **Precision Formatting**  
   - Uses `setprecision(2)` and `setw()` for aligned, readable output.  
3. **Dynamic Digit Calculation**  
   - Automatically adjusts spacing based on the largest value.  
4. **Mathematical Accuracy**  
   - Correct conversion formulas for each unit type.  

---

### **Skills Demonstrated**  
#### **Core C++**  
- **I/O Manipulation**: `iomanip` for formatted output (`setw`, `fixed`).  
- **Conditional Logic**: `if-else` chains for menu navigation.  
- **Arithmetic Operations**: Division/modulo for unit breakdowns.  

#### **Algorithmic Thinking**  
- **Digit Counting**: Dynamically calculates spacing with `mx` and loop.  
- **Unit Conversions**:  
  - Time: `3600s = 1 hour`, `60s = 1 minute`.  
  - Temperature: `C = (F-32)*5/9`, `K = C + 273.15`.  

#### **User Experience**  
- **Clear Prompts**: Guides users through input steps.  
- **Error Handling**: Detects invalid menu choices.  

---

### **Test Cases**  
| Category   | Input          | Output (Formatted)                  |  
|------------|----------------|-------------------------------------|  
| Time       | `3665 seconds` | `1 Hours`<br>`1 Minutes`<br>`5 Seconds` |  
| Distance   | `150000 cm`    | `1 Kilometers`<br>`500 Meters`<br>`0 Centimeters` |  
| Temperature| `98.6°F`       | `37.00 Celsius`<br>`310.15 Kelvin`  |  

---

### **Suggested Improvements**  
1. **Loop for Repeated Use**: Allow multiple conversions without restarting.  
2. **More Units**: Add miles/feet, milliseconds, etc.  
3. **Input Validation**: Ensure positive numbers for time/distance.  
4. **Graphical Interface**: Port to Qt for buttons/dropdowns.  

---

### **Why "UnitMaster Pro"?**  
- **Professional**: Suitable for educational or engineering use.  
- **Memorable**: Emphasizes mastery of unit conversions.  
- **Scalable**: Ready for additional units/functions.  

Contributers: Mousa M Mousa, Omar Mohamed, Youssef Hamed
