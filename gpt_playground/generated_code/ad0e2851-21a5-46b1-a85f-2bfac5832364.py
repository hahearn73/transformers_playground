class ShapeCalculator:
    def __init__(self):
        pass

    def calculate_area(self, shape, **kwargs):
        if shape.lower() == 'circle':
            return self.circle_area(kwargs.get('radius'))
        elif shape.lower() == 'rectangle':
            return self.rectangle_area(kwargs.get('length'), kwargs.get('width'))
        else:
            return "Shape not supported."

    def circle_area(self, radius):
        if radius is None: return "Radius is required for circle."
        return 3.14 * (radius ** 2)

    def rectangle_area(self, length, width):
        if length is None or width is None: return "Length and width are required for rectangle."
        return length * width


# Example usage:
calculator = ShapeCalculator()
circle_area = calculator.calculate_area('circle', radius=5)
print('Circle Area:', circle_area)

rectangle_area = calculator.calculate_area('rectangle', length=4, width=6)
print('Rectangle Area:', rectangle_area)