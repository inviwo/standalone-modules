/*********************************************************************************
 *
 * Inviwo - Interactive Visualization Workshop
 *
 * Copyright (c) 2023 Inviwo Foundation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *********************************************************************************/

#include <inviwo/standaloneexample/standaloneexamplemodule.h>

#include <inviwo/core/util/logcentral.h>
#include <inviwo/standaloneexample/processors/standaloneprocessor.h>

namespace inviwo {

StandaloneExampleModule::StandaloneExampleModule(InviwoApplication* app) : InviwoModule(app, "StandaloneExample") {
    // Add a directory to the search path of the Shadermanager
    // ShaderManager::getPtr()->addShaderSearchPath(getPath(ModulePath::GLSL));

    // Register objects that can be shared with the rest of inviwo here:

    // Processors
    // registerProcessor<StandaloneExampleProcessor>();
    registerProcessor<StandaloneProcessor>();

    // Properties
    // registerProperty<StandaloneExampleProperty>();

    // Readers and writes
    // registerDataReader(std::make_unique<StandaloneExampleReader>());
    // registerDataWriter(std::make_unique<StandaloneExampleWriter>());

    // Data converters
    // registerRepresentationConverter(std::make_unique<StandaloneExampleDisk2RAMConverter>());

    // Ports
    // registerPort<StandaloneExampleOutport>();
    // registerPort<StandaloneExampleInport>();

    // PropertyWidgets
    // registerPropertyWidget<StandaloneExamplePropertyWidget, StandaloneExampleProperty>("Default");

    // Dialogs
    // registerDialog<StandaloneExampleDialog>(StandaloneExampleOutport);

    // Other things
    // registerCapabilities(std::make_unique<StandaloneExampleCapabilities>());
    // registerSettings(std::make_unique<StandaloneExampleSettings>());
    // registerMetaData(std::make_unique<StandaloneExampleMetaData>());
    // registerPortInspector("StandaloneExampleOutport", "path/workspace.inv");
    // registerProcessorWidget(std::string processorClassName, std::unique_ptr<ProcessorWidget> processorWidget); 
    // registerDrawer(std::make_unique_ptr<StandaloneExampleDrawer>());

    LogInfo("Hello World from the StandaloneExampleModule");

}

}  // namespace inviwo
