# OOProject
This Integration project will highlight OOP skills from Programming II. It will be a programming solution to Monitoring Kitchen Inventory. There will be five locations where food can be stored: the frige, freezer, pantry, canned goods, and spices.

System Model:

		Container is the grandparent class to								Item is the parent class			Kitchen
		/			\										/	\
parent class Refridgerator	children classes pantry, canned good, spice drawer			child food class	child drink class
	/
child class Freezer

	- Container class contains name of container, the ability to add and remove items from the container
		the ability to print the inventory of the container, the ability to save the container object to 
		a text file, and the ability to read a text file and convert it into a container object
	- The refridgerator, pantry, canned goods and spice drawer inherit all fields and methods from container
	- the refridgerator adds methodology for temperature
	- the freezer inherits from the grandprarent class, container, and the parent class, refridgerator, with
		functionality changes

	- the item class gives basic functionality to be inherited by the food and drink child classes
	- items can be added and removed to containers
	
	- containers are stored in the kitchen class
		the kitchen class contains objects of the refridgerator, pantry, canned good, spice drawer,
		and freezer classes the kitchen allows access to the different objects to edits objects,
		save them to objects to file, and print inventory
		
	Text Files:
	- allow for returning user to access their kitchen data, or new users to set up their kitchen
	- default kitchen setup, enter as returning user to access default kitchen
	- otherwise, setup your kitchen as a new user, save your container files after updating objects
		
