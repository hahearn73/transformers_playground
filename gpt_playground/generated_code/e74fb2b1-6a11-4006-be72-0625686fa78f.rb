require 'securerandom'

class PseudoRandomNumberGenerator
  def initialize
    @seed = SecureRandom.random_number
  end

  def generate(limit = 1000)
    srand(@seed)
    rand(limit)
  end
end

# Example usage
generator = PseudoRandomNumberGenerator.new
puts generator.generate
puts generator.generate(500)