Task:
Develop a Digital Input/Output (DIO) driver for Arduino compatible with AVR microcontrollers. The driver should include functions for pinMode, digitalWrite, digitalToggle, and digitalRead.

Specifications:

1. DIO.h:
   - Declare function prototypes for pinMode, digitalWrite, digitalRead, and digitalToggle.

2. DIO.c:
   - Implement the functions declared in DIO.h.
   - Ensure proper handling of input/output configurations and pin states.
   - Utilize bit manipulation macros defined in bitMath.h for register operations.

3. stdTypes.h:
   - Define standard data types not dependent on compiler.
   - Include data types such as uint8_t, uint16_t, int8_t, etc.

4. bitMath.h:
   - Implement bit manipulation functions like setBit, getBit, clearBit, and toggleBit.
   - These functions will be utilized in DIO.c for register operations.

5. register.h:
   - Define macros for accessing AVR microcontroller registers (DDR, PIN, PORT) for ports A, B, C, D.

Function Definitions:

1. pinMode(port_pin, state):
   - Configure the specified port_pin as input or output based on the provided state.
   - port_pin: The port and pin number combined (e.g., PA0 for Port A, Pin 0).
   - state: Input (0) or Output (1).

2. digitalWrite(port_pin, state):
   - Write the specified state (high or low) to the given port_pin.
   - port_pin: The port and pin number combined.
   - state: High (1) or Low (0).

3. digitalRead(port_pin):
   - Read the digital state (high or low) of the specified port_pin.
   - port_pin: The port and pin number combined.
   - Return: High (1) or Low (0).

4. digitalToggle(port_pin):
   - Toggle the digital state of the specified port_pin.
   - port_pin: The port and pin number combined.
