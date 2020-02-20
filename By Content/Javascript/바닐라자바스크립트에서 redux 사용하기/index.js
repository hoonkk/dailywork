import { createStore } from "redux";

const divToggle = document.querySelector('.toggle');
const counter = document.querySelector('hi');
const btnIncrease = document.querySelector('#increase');
const btnDecrease = document.querySelector('#decrease');

const TOGGLE_SWITCH = 'TOGGLE_SWITCH';
const INCREASE = "INCREASE";
const DECREASE = "DECREASE";

const toggleSwitch = () => ({type: TOGGLE_SWITCH});
const increase = difference => ({type: INCREASE, difference});
const decrease = () => ({type: DECREASE});

const initialState = {
    toggle: false,
    counter: 0
};

function reducer(state = initialState, action) {
    // action.type에 따라 다른 작업 처리
    switch(action.type) {
        case TOGGLE_SWITCH:
            return {
                ...state, //얕은 복사로 불변성 유지
                toggle: !state.toggle
            };
        case INCREASE:
            return {
                ...state,
                counter: state.counter + action.difference
            };
        case DECREASE:
            return {
                ...state,
                counter: state.counter - 1
            }
        default:
            return state;
    }
}


const store = createStore(reducer);

const render = () => {
    const state = store.getState();
    // 토글 처리
    if (state.toggle) {
        divToggle.classList.add('active');
    } else {
        divToggle.classList.remove('active');
    }

    // 카운터 처리
    counter.innerText = state.counter;
};

render();
store.subscribe(render);

divToggle.onclick = () => {
    store.dispatch(toggleSwitch());
};
btnIncrease.onclick = () => {
    store.dispatch(increase(1));
};
btnDecrease.onclick = () => {
    store.dispatch(decrease());
}