### First problem description: 
![This is an image]([https://myoctocat.com/assets/images/base-octocat.svg](https://www.canva.com/design/DAFOZOFS9dc/x1yILloukTOHdHdzmhMinw/watch?utm_content=DAFOZOFS9dc&utm_campaign=share_your_design&utm_medium=link&utm_source=shareyourdesignpanel))
Generating a pseudo-random code composed of a random number of letters and numbers is necessary. This code will have a different distribution of the given set of numbers and characters and a length specified by the user at each program output. For our purposes, we do not need relatively random code because we do not use it in cryptography, we do not use it for statistical research, or we do not use it to create simulators in a video game. We need a sufficiently (pseudo) random code, and that's why we will try to ensure that the code is uniformly distributed (so that all characters have the same probability of occurrence) and that it is not deterministic, i.e., that restarting our program does not have the same solution. Pseudo Random Number Generator A computer program can never generate a random number;  the final number is always based on some mathematical function and the input data. There are very creative ways of entering data that will be processed in the program:
```
• Measurement of hardware functions in a computer, 
• Measurement of atmospheric acoustics 
• SOCR contains numerous interactive activities and demonstrations of random number generation using Java applets, 
• The Quantum Optics Group on ANY: generates random numbers originating from the quantum vacuum. Someone can download a random number sample by visiting their quantum random number generator research page 
• Quantum Random Bit Generator Service at the Ruđer Bošković Institute collects randomness from the quantum process of photon emission in semiconductors. They provide a variety of data collection methods, including header files for several programming languages. 
• A group at the Taiyuan University of Technology generates random numbers from a chaotic laser. Sample random numbers are available from their physical random number generator service. In C++, there are various ways to get "not the best" pseudo-random numbers using the library and the rand() function, the boost library, or some other way. In this particular program, we do not need especially random numbers.
```
