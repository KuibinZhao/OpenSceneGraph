// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Camera>
#include <osg/FrameStamp>
#include <osg/Node>
#include <osg/Timer>
#include <osgViewer/Viewer>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< osg::GraphicsContext * >, osgViewer::Viewer::Contexts);

TYPE_NAME_ALIAS(std::vector< osgViewer::GraphicsWindow * >, osgViewer::Viewer::Windows);

BEGIN_ENUM_REFLECTOR(osgViewer::Viewer::ThreadingModel)
	I_EnumLabel(osgViewer::Viewer::SingleThreaded);
	I_EnumLabel(osgViewer::Viewer::ThreadPerContext);
	I_EnumLabel(osgViewer::Viewer::ThreadPerCamera);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgViewer::Viewer::BarrierPosition)
	I_EnumLabel(osgViewer::Viewer::BeforeSwapBuffers);
	I_EnumLabel(osgViewer::Viewer::AfterSwapBuffers);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgViewer::Viewer)
	I_BaseType(osgViewer::View);
	I_Constructor0(____Viewer,
	               "",
	               "");
	I_Method0(bool, isRealized,
	          __bool__isRealized,
	          "Get whether at least of one of this viewers windows are realized. ",
	          "");
	I_Method0(void, realize,
	          __void__realize,
	          "set up windows and associated threads. ",
	          "");
	I_Method1(void, setDone, IN, bool, done,
	          __void__setDone__bool,
	          "",
	          "");
	I_Method0(bool, done,
	          __bool__done,
	          "",
	          "");
	I_Method1(void, setStartTick, IN, osg::Timer_t, tick,
	          __void__setStartTick__osg_Timer_t,
	          "",
	          "");
	I_Method0(osg::Timer_t, getStartTick,
	          __osg_Timer_t__getStartTick,
	          "",
	          "");
	I_MethodWithDefaults1(void, setReferenceTime, IN, double, time, 0.0,
	                      __void__setReferenceTime__double,
	                      "",
	                      "");
	I_Method1(void, setFrameStamp, IN, osg::FrameStamp *, frameStamp,
	          __void__setFrameStamp__osg_FrameStamp_P1,
	          "",
	          "");
	I_Method0(osg::FrameStamp *, getFrameStamp,
	          __osg_FrameStamp_P1__getFrameStamp,
	          "",
	          "");
	I_Method0(const osg::FrameStamp *, getFrameStamp,
	          __C5_osg_FrameStamp_P1__getFrameStamp,
	          "",
	          "");
	I_Method1(void, setSceneData, IN, osg::Node *, node,
	          __void__setSceneData__osg_Node_P1,
	          "",
	          "");
	I_Method1(void, setThreadingModel, IN, osgViewer::Viewer::ThreadingModel, threadingModel,
	          __void__setThreadingModel__ThreadingModel,
	          "Set the threading model the rendering traversals will use. ",
	          "");
	I_Method0(osgViewer::Viewer::ThreadingModel, getThreadingModel,
	          __ThreadingModel__getThreadingModel,
	          "Get the threading model the rendering traversals will use. ",
	          "");
	I_Method1(void, setEndBarrierPosition, IN, osgViewer::Viewer::BarrierPosition, bp,
	          __void__setEndBarrierPosition__BarrierPosition,
	          "Set the position of the end barrier. ",
	          "AfterSwapBuffers will may result is slightly higher framerates, by may lead to inconcistent swapping between different windows. BeforeSwapBuffers may lead to slightly lower framerate, but improve consistency in timing of swap buffers, especially important if you are likely to consistently break frame. ");
	I_Method0(osgViewer::Viewer::BarrierPosition, getEndBarrierPosition,
	          __BarrierPosition__getEndBarrierPosition,
	          "Get the end barrier position. ",
	          "");
	I_Method1(void, setKeyEventSetsDone, IN, int, key,
	          __void__setKeyEventSetsDone__int,
	          "Set the key event that the viewer checks on each frame to see if the viewer's done flag should be set to signal end of viewers main loop. ",
	          "Default value is Escape (osgGA::GUIEVentAdapter::KEY_Escape). Setting to 0 switches off the feature. ");
	I_Method0(int, getKeyEventSetsDone,
	          __int__getKeyEventSetsDone,
	          "get the key event that the viewer checks on each frame to see if the viewer's done flag. ",
	          "");
	I_Method1(void, setQuitEventSetsDone, IN, bool, flag,
	          __void__setQuitEventSetsDone__bool,
	          "if the flag is true, the viewer set its done flag when a QUIT_APPLICATION is received, false disables this feature ",
	          "");
	I_Method0(bool, getQuitEventSetsDone,
	          __bool__getQuitEventSetsDone,
	          "",
	          "true if the viewer respond to the QUIT_APPLICATION-event  ");
	I_Method0(int, run,
	          __int__run,
	          "Execute a main frame loop. ",
	          "Equivialant to while (!viewer.done()) viewer.frame(); Also calls realize() if the viewer is not already realized, and installs trackball manipulator if one is not already assigned.");
	I_Method0(void, frame,
	          __void__frame,
	          "Render a complete new frame. ",
	          "Calls advance(), eventTraversal(), updateTraversal(), renderingTraversals(). ");
	I_Method0(void, advance,
	          __void__advance,
	          "",
	          "");
	I_Method0(void, eventTraversal,
	          __void__eventTraversal,
	          "",
	          "");
	I_Method0(void, updateTraversal,
	          __void__updateTraversal,
	          "",
	          "");
	I_Method0(void, renderingTraversals,
	          __void__renderingTraversals,
	          "",
	          "");
	I_Method0(void, releaseAllGLObjects,
	          __void__releaseAllGLObjects,
	          "Release all OpenGL objects associated with this viewer's scenegraph. ",
	          "Note, does not deleted the actual OpenGL objects, it just releases them to the pending GL object delete lists which will need flushing once a valid graphics context is obtained. ");
	I_Method0(void, cleanup,
	          __void__cleanup,
	          "Clean up all OpenGL objects associated with this viewer's scenegraph. ",
	          "");
	I_Method1(void, setCameraWithFocus, IN, osg::Camera *, camera,
	          __void__setCameraWithFocus__osg_Camera_P1,
	          "",
	          "");
	I_Method0(osg::Camera *, getCameraWithFocus,
	          __osg_Camera_P1__getCameraWithFocus,
	          "",
	          "");
	I_Method0(const osg::Camera *, getCameraWithFocus,
	          __C5_osg_Camera_P1__getCameraWithFocus,
	          "",
	          "");
	I_MethodWithDefaults2(void, getContexts, IN, osgViewer::Viewer::Contexts &, contexts, , IN, bool, onlyValid, true,
	                      __void__getContexts__Contexts_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getWindows, IN, osgViewer::Viewer::Windows &, windows, , IN, bool, onlyValid, true,
	                      __void__getWindows__Windows_R1__bool,
	                      "",
	                      "");
	I_Method0(void, stopThreading,
	          __void__stopThreading,
	          "",
	          "");
	I_Method0(void, startThreading,
	          __void__startThreading,
	          "",
	          "");
	I_Method0(void, setUpRenderingSupport,
	          __void__setUpRenderingSupport,
	          "",
	          "");
	I_SimpleProperty(osg::Camera *, CameraWithFocus, 
	                 __osg_Camera_P1__getCameraWithFocus, 
	                 __void__setCameraWithFocus__osg_Camera_P1);
	I_SimpleProperty(bool, Done, 
	                 0, 
	                 __void__setDone__bool);
	I_SimpleProperty(osgViewer::Viewer::BarrierPosition, EndBarrierPosition, 
	                 __BarrierPosition__getEndBarrierPosition, 
	                 __void__setEndBarrierPosition__BarrierPosition);
	I_SimpleProperty(osg::FrameStamp *, FrameStamp, 
	                 __osg_FrameStamp_P1__getFrameStamp, 
	                 __void__setFrameStamp__osg_FrameStamp_P1);
	I_SimpleProperty(int, KeyEventSetsDone, 
	                 __int__getKeyEventSetsDone, 
	                 __void__setKeyEventSetsDone__int);
	I_SimpleProperty(bool, QuitEventSetsDone, 
	                 __bool__getQuitEventSetsDone, 
	                 __void__setQuitEventSetsDone__bool);
	I_SimpleProperty(double, ReferenceTime, 
	                 0, 
	                 __void__setReferenceTime__double);
	I_SimpleProperty(osg::Node *, SceneData, 
	                 0, 
	                 __void__setSceneData__osg_Node_P1);
	I_SimpleProperty(osg::Timer_t, StartTick, 
	                 __osg_Timer_t__getStartTick, 
	                 __void__setStartTick__osg_Timer_t);
	I_SimpleProperty(osgViewer::Viewer::ThreadingModel, ThreadingModel, 
	                 __ThreadingModel__getThreadingModel, 
	                 __void__setThreadingModel__ThreadingModel);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osg::GraphicsContext * >);

STD_VECTOR_REFLECTOR(std::vector< osgViewer::GraphicsWindow * >);

