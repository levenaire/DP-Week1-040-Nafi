Reflection

1. What is the invariant structure in your program?

Invariant structure di program ini adalah urutan fase yang dijalankan oleh `RunSession`. Urutannya adalah:
Generate Input → Compute Base Score → Compute Reward → Update Money → Shop Phase → Advance Round.
Urutan ini tidak boleh berubah karena ini adalah alur utama dari sistem run yang dibuat di program ini. Di sini `RunSession` cuma bertugas mengatur jalannya fase-fase tersebut selama 3 round. Class ini tidak menghitung score, tidak menghitung reward, dan juga tidak menghasilkan input.
Dengan cara ini, struktur utama program tetap stabil dan gampang dipahami. Jadi walaupun nanti kita mengubah cara score dihitung atau cara input dibuat, alur utama program tetap sama.


2. Which parts are mutable?

Bagian yang mutable di program ini adalah komponen yang menentukan perilaku gameplay, yaitu:

- Input generator  
- Scoring rule  
- Reward rule  

Bagian-bagian ini bisa kamu ubah tanpa harus menyentuh `RunSession`.
Contohnya di tugas ini aku mengganti input generator menjadi `RandomInputGenerator`, jadi angka yang dihasilkan tidak selalu sama. Selain itu reward rule juga aku ubah supaya reward tidak lagi sama dengan base score, tetapi ditambah bonus.
Perubahan seperti ini cuma mempengaruhi perilaku sistem, tapi tidak merusak struktur utama program.


3. When you replaced the InputGenerator, why didn’t RunSession change?

RunSession tidak perlu diubah karena `RunSession` hanya bergantung pada interface `IInputGenerator`, bukan pada class tertentu. Jadi selama generator baru masih mengikuti aturan dari interface tersebut, `RunSession` tetap bisa menggunakannya.
Dengan cara ini, kontrol loop dan cara input dihasilkan jadi terpisah. Jadi kamu bisa mengganti generator kapan saja tanpa harus mengubah sistem utama program.


4. What would happen if scoring logic was placed inside RunSession?

Kalau logika scoring dimasukkan langsung ke dalam `RunSession`, maka `RunSession` akan jadi terlalu bergantung pada aturan gameplay. Setiap kali aturan scoring berubah, kamu juga harus mengubah `RunSession`.
Hal ini membuat program jadi lebih sulit untuk dirawat dan dikembangkan. Dengan memisahkan scoring ke class sendiri, kamu bisa mengubah cara menghitung score tanpa harus menyentuh loop utama program.
