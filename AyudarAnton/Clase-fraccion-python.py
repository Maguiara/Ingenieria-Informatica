import math
class Fraccion:
    """
    Clase que representa una fracción matemática.
    """

    def __init__(self, numerador, denominador):
        """
        Constructor de la clase Fraccion.

        Args:
            numerador (int): El numerador de la fracción.
            denominador (int): El denominador de la fracción.
        """
        self.numerador = numerador
        self.denominador = denominador

    def __str__(self):
        """
        Representación de la fracción como cadena de texto.

        Returns:
            str: La fracción en formato "numerador/denominador".
        """
        return f"{self.numerador}/{self.denominador}"

    def __add__(self, other):
        """
        Suma dos fracciones.

        Args:
            other (Fraccion): La fracción a sumar.

        Returns:
            Fraccion: La fracción resultante de la suma.
        """
        nuevo_numerador = self.numerador * other.denominador + other.numerador * self.denominador
        nuevo_denominador = self.denominador * other.denominador
        return Fraccion(nuevo_numerador, nuevo_denominador)

    def __sub__(self, other):
        """
        Resta dos fracciones.

        Args:
            other (Fraccion): La fracción a restar.

        Returns:
            Fraccion: La fracción resultante de la resta.
        """
        nuevo_numerador = self.numerador * other.denominador - other.numerador * self.denominador
        nuevo_denominador = self.denominador * other.denominador
        return Fraccion(nuevo_numerador, nuevo_denominador)

    def __mul__(self, other):
        """
        Multiplica dos fracciones.

        Args:
            other (Fraccion): La fracción a multiplicar.

        Returns:
            Fraccion: La fracción resultante de la multiplicación.
        """
        nuevo_numerador = self.numerador * other.numerador
        nuevo_denominador = self.denominador * other.denominador
        return Fraccion(nuevo_numerador, nuevo_denominador)

    def __truediv__(self, other):
        """
        Divide dos fracciones.

        Args:
            other (Fraccion): La fracción a dividir.

        Returns:
            Fraccion: La fracción resultante de la división.
        """
        nuevo_numerador = self.numerador * other.denominador
        nuevo_denominador = self.denominador * other.numerador
        return Fraccion(nuevo_numerador, nuevo_denominador)

    def __eq__(self, other):
        """
        Compara dos fracciones para determinar si son iguales.

        Args:
            other (Fraccion): La fracción a comparar.

        Returns:
            bool: True si las fracciones son iguales, False en caso contrario.
        """
        return self.numerador * other.denominador == other.numerador * self.denominador

    def irreducible(self):
        """
        Calcula la forma irreducible de la fracción.

        Returns:
            Fraccion: La fracción en su forma irreducible.
        """
        mcd = math.gcd(self.numerador, self.denominador)
        nuevo_numerador = self.numerador // mcd
        nuevo_denominador = self.denominador // mcd
        return Fraccion(nuevo_numerador, nuevo_denominador)