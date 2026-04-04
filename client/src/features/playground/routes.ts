import type { RouteRecordRaw } from "vue-router";
import PlayContainer from "./containers/PlayContainer.vue";

export const PlayRoutes: RouteRecordRaw[] = [
  {
    path: "/playground",
    component: PlayContainer,
  }
];
