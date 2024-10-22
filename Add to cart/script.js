let cartTotal = 0;
let cartItems = [];
let Product = {
    product1: { productName: "Product1", productDescription: "ABC", productPrice: "$10", productId: "1" },
    product2: { productName: "Product2", productDescription: "EFG", productPrice: "$20", productId: "2" },
    product3: { productName: "Product3", productDescription: "HIJ", productPrice: "$30", productId: "3" },
    product4: { productName: "Product4", productDescription: "LMN", productPrice: "$40", productId: "4" },
}

localStorage.setItem("Product", JSON.stringify(Product));


let cardContainer = document.getElementById("card-container");
let card = '';
for (const key in Product) {
    const product = Product[key];

    card  += `
    <div class="col-md-4 mb-4">
        <div class="card">
            <img src="" class="card-img-top" alt="${product.productName}">
            <div class="card-body">
                <h5 class="card-title">${product.productName}</h5>
                <p class="card-text">${product.productDescription}</p>
                <p class="card-text"><strong>Price: ${product.productPrice}</strong></p>
                <button data-product-id="${key}" class="add-product btn btn-primary">Add to Cart</button>
            </div>
        </div>
    </div>
`;
}
    cardContainer.innerHTML = card;

let add = document.querySelectorAll('.add-product');

add.forEach(element => {
    element.addEventListener('click', (e) => {
        let productId = e.target.dataset.productId;
        if (!cartItems.includes(productId)) {
            cartItems.push(productId);
            document.getElementById("pcount").innerText = ++cartTotal;
            localStorage.setItem("cartItems", JSON.stringify(cartItems));
        } else {
            alert(`${Product[productId].productName} is already in your cart!`);
        }
    });
});