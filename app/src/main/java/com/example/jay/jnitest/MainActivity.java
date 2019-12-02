package com.example.jay.jnitest;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    //=======================================================
    static {
        /**
         * 加载动态库libhelloJni.so
         * 加载so文件，不要带上前缀lib和后缀.so
         */
        System.loadLibrary("helloJni");
    }
    // 声明native方法
    private native void testjni();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        testjni();
    }
}
