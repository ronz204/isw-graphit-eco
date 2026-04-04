import { createWebHistory, createRouter } from "vue-router";
import { PlayRoutes } from "@features/playground/routes";

export const Router = createRouter({
  history: createWebHistory(),
  routes: [
    ...PlayRoutes,
  ],
});
