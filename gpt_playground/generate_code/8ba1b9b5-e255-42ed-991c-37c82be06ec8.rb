class ShapeCalculator
  def self.calculate_area(shape, dimensions)
    case shape.downcase
    when "circle"
      area_circle(dimensions[:radius])
    when "rectangle"
      area_rectangle(dimensions[:length], dimensions[:width])
    else
      "Shape not recognized"
    end
  end

  private

  def self.area_circle(radius)
    Math::PI * radius**2
  end

  def self.area_rectangle(length, width)
    length * width
  end
end

# Example usage
puts ShapeCalculator.calculate_area("circle", {radius: 5})
puts ShapeCalculator.calculate_area("rectangle", {length: 4, width: 6})