import "./style.css";
import App from "./App.vue";
import { createApp } from "vue";

import { router } from "./router";
import ui from "@nuxt/ui/vue-plugin";

const app = createApp(App);

app.use(ui);
app.use(router);
app.mount("#app");
