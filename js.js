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

  const weekday = document.getElementById("weekday");

  weekday.innerText = `${now.toLocaleDateString(locale, {
    weekday: "long",
  })}`.toUpperCase();

  const day = document.getElementById("day");
  const month = document.getElementById("month");
  const year = document.getElementById("year");

  day.innerText = `${now.toLocaleDateString(locale, {
    day: "numeric",
  })}`.toUpperCase();
  month.innerText = `${now.toLocaleDateString(locale, {
    month: "long",
  })}`.toUpperCase();
  year.innerText = `${now.toLocaleDateString(locale, {
    year: "numeric",
  })}`.toUpperCase();

  const hour = document.getElementById("hour");
  const minute = document.getElementById("minute");

  hour.innerText = now.getHours().toString().padStart(2, 0);
  minute.innerHTML = now.getMinutes().toString().padStart(2, 0);
}

updateClock();
setInterval(() => {
  updateClock();
}, 1000);
