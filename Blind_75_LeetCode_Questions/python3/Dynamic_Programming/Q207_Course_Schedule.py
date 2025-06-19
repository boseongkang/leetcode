class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        graph = defaultdict(list)
        for i in prerequisites:
            a = i[0]
            b = i[1]
            graph[b].append(a)
        visited = set()
        path = set()

        def DFS(course):
            if course in path:
                return False
            if course in visited:
                return True
            path.add(course)
            for next_course in graph[course]:
                if not DFS(next_course):
                    return False
            path.remove(course)
            visited.add(course)
            return True
        for i in range(numCourses):
            if not DFS(i):
                return False
        return True
