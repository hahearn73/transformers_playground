import Foundation

struct PseudoRandomGenerator {
    private var seed: UInt32

    init(seed: UInt32) {
        self.seed = seed
    }

    mutating func generate() -> UInt32 {
        seed = 1103515245 &* seed &+ 12345
        return seed % UInt32.max
    }
}

var generator = PseudoRandomGenerator(seed: 1234)
for _ in 1...5 {
    print(generator.generate())
}