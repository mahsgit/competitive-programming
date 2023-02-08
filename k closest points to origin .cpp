class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        auto euclidean = [](auto& points) { 
            return points[0] * points[0] + points[1] * points[1];
             };
        sort(begin(points), end(points), [&](auto& a, auto& b) {
         return euclidean(a) < euclidean(b); });
        points.resize(k);
        return points;
    }
};
