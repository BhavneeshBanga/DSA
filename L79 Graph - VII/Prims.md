- DS - Visited set, priority_queue<pair> , unordered_map
- insert the pair of < -1, src> in  priority_queue
- one by one remove the root element of the priority_queue
- if the root element is already Visited, then we will just continue.
- we mark the root Visited
- we store the weight of the pair in the ans
- update the mapping 
- go to every neighbour of the current element and only add those which are non Visited and have a better weight proposition.


# 📌 Minimum Spanning Tree (Prim’s Algorithm) – Approach Notes

## 🧠 Data Structures Used
- `visited set` → To keep track of visited nodes  
- `priority_queue<pair<int, int>>` → Min-heap to select minimum weight edge  
- `unordered_map` → To store/update best weights or adjacency list  

---

## 🚀 Algorithm Steps

### 1. Initialization
- Insert the pair `<-1, src>` into the priority queue  
  - `-1` represents a dummy weight for the source node  

---

### 2. Processing Loop
- Run while the priority queue is not empty:

#### 🔹 Extract Minimum
- Remove the top element (minimum weight pair) from the priority queue  

#### 🔹 Check Visited
- If the node is already visited → **continue**  

#### 🔹 Mark Visited
- Mark the current node as visited  

#### 🔹 Add Weight
- Add the weight of the current edge to the final answer (`ans`)  

#### 🔹 Update Mapping
- Update mappings like parent or minimum weight tracking if required  

---

### 3. Explore Neighbors
- For each neighbor of the current node:
  - If the neighbor is **not visited**
  - And the new edge gives a **better (smaller) weight**
    - Push it into the priority queue  
                                       
---

## ✅ Key Idea
- Always pick the **minimum weight edge**
- Avoid cycles using the **visited set**
- Gradually build the **Minimum Spanning Tree**

---

## 💡 Intuition
You are always choosing the cheapest connection to expand your graph  
while avoiding revisiting nodes or forming cycles.


git add .
git commit -m "Added code"
git push
