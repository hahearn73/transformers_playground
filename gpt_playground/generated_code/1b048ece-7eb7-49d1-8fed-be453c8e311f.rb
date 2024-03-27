def distance_3d(point1, point2)
  Math.sqrt(
    (point2[0] - point1[0]) ** 2 +
    (point2[1] - point1[1]) ** 2 +
    (point2[2] - point1[2]) ** 2
  )
end