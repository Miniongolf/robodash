# Using Widgets

Robodash provides a suite of widgets that make giving your robot an intuitive, multifunctional UI as easy as possible.

All of the widgets provided by Robodash are class-based and provide a simple interface. The following example utilizes the autonomous selector and the console.

```cpp
rd::Selector selector({
   {"Auton 0", &auton0},
   {"Auton 1", &auton1},
   {"Skills Run", &skills}
});

rd::Console console;

void initialize() {
   console.println("Initializing robot...");
   // Robot stuff would happen...
}

void autonomous() {
   console.println("Running auton...");
   selector.run_auton();
}
```

You can learn more about each widget and how to use them in the [API reference](../../api/widgets/index.md).
