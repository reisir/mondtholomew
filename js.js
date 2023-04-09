function latest() {
  fetch(`https://mond.amv.tools/skins?full_name=reisir/mondtholomew`)
    .then((response) => response.json())
    .then((data) => {
      const { latest_release } = data[0];
      console.log(data, latest_release);
      const download = document.querySelector("#download");
      download.href = latest_release.browser_download_url;
    });
}

latest();
