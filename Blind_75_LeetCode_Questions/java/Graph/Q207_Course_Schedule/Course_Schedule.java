class Solution {
    public boolean canFinish(int numCourses, int[][] prerequisites) 
    {
        List<List<Integer>> graph = new ArrayList<>();
        int[] inDegree = new int[numCourses];

        for(int i = 0; i < numCourses; ++i)
        {
            graph.add(new ArrayList<>());
        }

        for(int i = 0; i < prerequisites.length; ++i)
        {
            int course = prerequisites[i][0];
            int preCourse = prerequisites[i][1];
            graph.get(preCourse).add(course);
            inDegree[course]++;
        }

        Queue<Integer> queue = new LinkedList<>();
        for(int i = 0; i < numCourses; ++i)
        {
            if(inDegree[i] == 0)
                queue.offer(i);
        }

        int cnt = 0;

        while(!queue.isEmpty())
        {
            int current = queue.poll();
            cnt++;

            List<Integer> neighbors = graph.get(current);
            for(int i = 0; i < neighbors.size(); ++i)
            {
                int neighbor = neighbors.get(i);
                inDegree[neighbor]--;
                if(inDegree[neighbor] == 0)
                    queue.offer(neighbor);
            }
        }

        return cnt == numCourses;
    }
}

