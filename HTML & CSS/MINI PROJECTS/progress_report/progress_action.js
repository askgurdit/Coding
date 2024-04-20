// Function to load videos
function loadVideos() {
    const videoContainer = document.getElementById('videos');

    // Add your video URLs here
    const videoUrls = [
        'https://www.instagram.com/reel/C4f_aXzSK11/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==',
        'https://www.instagram.com/reel/C5DeyDNSwKM/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==',
        // Add more video URLs here
    ];
    

    videoUrls.forEach(url => {
        const videoDiv = document.createElement('div');
        videoDiv.innerHTML = `<blockquote class="instagram-media" data-instgrm-captioned data-instgrm-permalink="${url}" data-instgrm-version="14"></blockquote>`;
        videoContainer.appendChild(videoDiv);
    });
}

// Call the function to load videos
loadVideos();
