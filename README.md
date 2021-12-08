# OOProject
This Integration project will highlight OOP skills from Programming II. It will be a programming solution to Monitoring Kitchen Inventory. There will be five locations where food can be stored: the frige, freezer, pantry, canned goods, and spices.

Inheritance Model
				Container is the grandparent class to
				/							\
		parent class Refridgerator		children classes pantry, canned good, spice drawer
			/
	child class Freezer

	- Container class contains name of container, the ability to add and remove items from the container
		the ability to print the inventory of the container, the ability to save the container object to 
		a text file, and the ability to read a text file and convert it into a container object
	- The refridgerator, pantry, canned goods and spice drawer inherit all fields and methods from container
	- the refridgerator adds methodology for temperature
	- the freezer inherits from the grandprarent class, container, and the parent class, refridgerator, with
		functionality changes
