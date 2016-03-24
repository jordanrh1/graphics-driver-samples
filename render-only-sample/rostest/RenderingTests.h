#ifndef _RENDERING_TESTS_H_
#define _RENDERING_TESTS_H_

//
// Tests related to rendering
//
class RenderingTests {
    BEGIN_TEST_CLASS(RenderingTests)
        TEST_CLASS_PROPERTY(L"ThreadingModel", L"MTA")
    END_TEST_CLASS()

    TEST_CLASS_SETUP(ClassSetup)
    
    BEGIN_TEST_METHOD(TestRenderTriangle)
        TEST_METHOD_PROPERTY(
            L"Description",
            L"Render a triangle.")
    END_TEST_METHOD()
            
    Microsoft::WRL::ComPtr<ID3D11Device3> m_device;
    Microsoft::WRL::ComPtr<ID3D11DeviceContext3> m_context;
};

#endif // _RENDERING_TESTS_H_
