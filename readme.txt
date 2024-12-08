1. Assign mesh currents to the n meshes, use clockwise current direction as convention
2. Apply KVL to each of the n meshes. Use Ohm’s law to express the voltages in terms of the mesh currents.
(R1+R3)*I1 - R3*I2 = V1;
(R2+R3)*I2 - R3*I1 = -V2;
[	R1+R3	-R3		][I1]	_	[	 V1		]	
[	-R3		R2+R3	][I2]	-	[	-V2		]

3. Solve the resulting n simultaneous equations to get the mesh currents.
4. According to Eq. (2.12), if a circuit has n nodes, b branches, and l independent loops or meshes, then Hence, l independent
simultaneous equations are required to solve the circuit using mesh analysis
5. i = mesh_current; I = branch_current; i1 = I1; i2 = I2; I3 = i1-i2;
6. Voltages will be the input => current is to be found
7. For first version, take simple ciruit with proper resistances and voltages. User inputs resistances and voltages, using matrix method, 
display how to solve.
8. For second version, take simple 2 mesh system with all objects, but give user the choice to include and exclude different objects in addition
to features in first version
9. In third version, give display more methods to do circuit analysis
10. In fourth version, give user the choice to connect nodes and make own circuit, in addition to above features.
11. For assignment purpose, use image input and pre-include circuit image, and then ask values from user and display output and method of solving 
using matrix method.	-Failed to display image	-Use first version model instead