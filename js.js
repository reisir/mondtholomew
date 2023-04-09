function latest() {
  fetch(`https://mond.amv.tools/skins?full_name=reisir/mondtholomew`)
    .then((response) => response.json())
    .then((data) => {
      const { latest_release } = data[0];
      console.log(data, latest_release);
      const download = document.querySelector(`#download-link`);
      download.href = latest_release.browser_download_url;
    });
}

latest();

function updateClock() {
  const now = new Date();
  const locale = navigator.languages[0];

  const day = document.getElementById("day");
  const date = document.getElementById("date");
  const time = document.getElementById("time");

  day.innerText = `${now.toLocaleDateString(locale, {
    weekday: "long",
  })}`.toUpperCase();

  date.innerText = `${now.toLocaleDateString(locale, {
    day: "numeric",
    month: "long",
    year: "numeric",
  })}`.toUpperCase();

  time.innerText = `- ${now.getHours()} : ${now.getMinutes()} -`;
}

updateClock();
setInterval(() => {
  updateClock();
}, 1000);
