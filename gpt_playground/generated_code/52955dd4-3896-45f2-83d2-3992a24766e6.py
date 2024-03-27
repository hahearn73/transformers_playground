def calculate_distance_3d(point1, point2):
    """
    Calculates the Euclidean distance between two points in 3D space.

    Parameters:
    - point1: Tuple of coordinates (x1, y1, z1) for the first point.
    - point2: Tuple of coordinates (x2, y2, z2) for the second point.

    Returns:
    - The Euclidean distance between the two points.
    """
    x1, y1, z1 = point1
    x2, y2, z2 = point2
    
    return ((x2 - x1)**2 + (y2 - y1)**2 + (z2 - z1)**2)**0.5