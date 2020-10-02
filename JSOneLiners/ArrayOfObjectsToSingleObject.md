Convert an array of objects to single Object having keys equal to `key` passed in parameters :

```
const convertObject = (arr, key) => arr.reduce((a, b) => ({ ...a, [b[key]]: b }), {});
```
