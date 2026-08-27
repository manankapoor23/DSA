# DSA

Daily Data Structures & Algorithms practice — solutions to problems solved on
[LeetCode](https://leetcode.com), synced here one folder per problem.

## Structure

Each problem lives in its own folder named `<problem-number>-<problem-slug>`,
matching its LeetCode ID and URL slug (e.g. [`1-two-sum`](./1-two-sum) →
[leetcode.com/problems/two-sum](https://leetcode.com/problems/two-sum)). Folders
sort naturally by problem number, not by when they were solved.

Inside each folder:
- `README.md` — the original problem statement and difficulty badge
- `Notes.md` — time spent solving it
- a solution file, mostly `.cpp`, with a few `.js` / `.ts` / `.sql` for
  JavaScript- and database-specific problems

**192 problems solved** across:

| Topic | Count |
|---|---|
| Arrays & Matrices | 44 |
| Dynamic Programming | 36 |
| Trees | 21 |
| Linked List | 18 |
| Strings | 17 |
| Binary Search | 11 |
| Math & Misc | 10 |
| Bit Manipulation | 7 |
| Stacks & Queues | 7 |
| Greedy & Intervals | 7 |
| Graphs | 5 |
| Design | 5 |
| SQL | 2 |
| Backtracking | 2 |

(Topic grouping above is inferred from problem names for navigation — there
are no physical topic subfolders, just the flat `number-slug` folders.)

**Difficulty:** 100 Easy · 80 Medium · 12 Hard, per the badges in each
folder's `README.md`.

**Languages:** primarily C++ (168 problems), with JavaScript, TypeScript, and
SQL for a handful of problems where LeetCode requires them.

## Navigating

- Know the LeetCode problem number? Jump straight to `<number>-*/`.
- Browsing by topic? Use the table above as a rough guide, or search folder
  names for keywords (`tree`, `linked-list`, `graph`, `dp`-style names like
  `coin-change`, `house-robber`, etc.).
- Each folder's own `README.md` has the full problem statement, so solutions
  are self-contained and don't require this index to make sense.
