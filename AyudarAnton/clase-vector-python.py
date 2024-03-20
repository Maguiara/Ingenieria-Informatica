class Vector:
    """
    Represents a vector in three-dimensional space.

    Attributes:
        x (float): The x-coordinate of the vector.
        y (float): The y-coordinate of the vector.
        z (float): The z-coordinate of the vector.
    """

    def __init__(self, x=0, y=0, z=0):
        self.x = x
        self.y = y
        self.z = z

    def __str__(self):
        return f"({self.x}, {self.y}, {self.z})"

    def __add__(self, other):
        """
        Adds two vectors element-wise.

        Args:
            other (Vector): The vector to be added.

        Returns:
            Vector: The resulting vector after addition.

        Raises:
            TypeError: If the operand type is not a Vector.
        """
        if isinstance(other, Vector):
            return Vector(self.x + other.x, self.y + other.y, self.z + other.z)
        else:
            raise TypeError("Unsupported operand type for +")

    def __sub__(self, other):
        """
        Subtracts two vectors element-wise.

        Args:
            other (Vector): The vector to be subtracted.

        Returns:
            Vector: The resulting vector after subtraction.

        Raises:
            TypeError: If the operand type is not a Vector.
        """
        if isinstance(other, Vector):
            return Vector(self.x - other.x, self.y - other.y, self.z - other.z)
        else:
            raise TypeError("Unsupported operand type for -")

    def dot_product(self, other):
        """
        Calculates the dot product of two vectors.

        Args:
            other (Vector): The vector to calculate the dot product with.

        Returns:
            float: The dot product of the two vectors.

        Raises:
            TypeError: If the operand type is not a Vector.
        """
        if isinstance(other, Vector):
            return self.x * other.x + self.y * other.y + self.z * other.z
        else:
            raise TypeError("Unsupported operand type for dot product")

    def modulus(self):
        """
        Calculates the modulus (magnitude) of the vector.

        Returns:
            float: The modulus of the vector.
        """
        return (self.x ** 2 + self.y ** 2 + self.z ** 2) ** 0.5

    def __eq__(self, other):
        """
        Checks if two vectors are equal.

        Args:
            other (Vector): The vector to compare with.

        Returns:
            bool: True if the vectors are equal, False otherwise.

        Raises:
            TypeError: If the operand type is not a Vector.
        """
        if isinstance(other, Vector):
            return self.x == other.x and self.y == other.y and self.z == other.z
        else:
            return False