package com.swmansion.rnscreens.stack.animation

import androidx.transition.Transition
import com.swmansion.rnscreens.stack.animation.engine.TransitionSlot
import com.swmansion.rnscreens.stack.screen.StackScreenFragment

/**
 * Answers a fragment's transition getters: the transition it plays in a slot right now; `null`
 * is none (and no seeking for that batch).
 */
internal fun interface ScreenTransitionProviding {
    fun transitionFor(
        fragment: StackScreenFragment,
        slot: TransitionSlot,
    ): Transition?
}
