pts= [[2, 4], [3, 2], [-1, 1]]
ttl_tym = 0
for i in range(len(pts) - 1):
    x1, y1 = pts[i]
    x2, y2 = pts[i + 1]
    distance = (x2 - x1)+(y2 - y1)
    ttl_tym+= distance
print(f"Minimum time to visit all points: {ttl_tym}")
