import java.util.Set;
import java.util.HashSet;

public class SetIntersection {
    public static <T> Set<T> intersection(Set<T> setA, Set<T> setB) {
        Set<T> resultSet = new HashSet<>(setA);
        resultSet.retainAll(setB);
        return resultSet;
    }

    public static void main(String[] args) {
        Set<Integer> setA = new HashSet<>();
        setA.add(1);
        setA.add(2);
        setA.add(3);

        Set<Integer> setB = new HashSet<>();
        setB.add(2);
        setB.add(3);
        setB.add(4);

        Set<Integer> result = intersection(setA, setB);
        System.out.println("Intersection of the two sets is: " + result);
    }
}