#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsFactory_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnostics_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreDiagnostics)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace Unity::Services::Core::Internal {
struct __CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26;
}
namespace Unity::Services::Core::Internal {
struct __CoreDiagnostics___SendCoreDiagnosticsAsync_d__24;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnosticsComponentProvider;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnosticsFactory;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnostics;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class CoreDiagnostics;
}
namespace Unity::Services::Core::Internal {
struct __CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26;
}
namespace Unity::Services::Core::Internal {
struct __CoreDiagnostics___SendCoreDiagnosticsAsync_d__24;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CoreDiagnostics);
MARK_VAL_T(::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26);
MARK_VAL_T(::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24);
// Type: ::<SendCoreDiagnosticsAsync>d__24
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: ::CoreDiagnostics::<SendCoreDiagnosticsAsync>d__24
struct CORDL_TYPE __CoreDiagnostics___SendCoreDiagnosticsAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x266f658, size 0x280, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x266f8d8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoreDiagnostics___SendCoreDiagnosticsAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::CoreDiagnostics*",
  // modifiers: "", def_value: None }, CppParam { name: "diagnosticName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "::System::Exception*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>", modifiers: "", def_value: None
  // }]
  constexpr __CoreDiagnostics___SendCoreDiagnosticsAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                               ::Unity::Services::Core::Internal::CoreDiagnostics* __4__this, ::StringW diagnosticName, ::System::Exception* exception,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::CoreDiagnostics* __4__this;

  /// @brief Field diagnosticName, offset: 0x28, size: 0x8, def value: None
  ::StringW diagnosticName;

  /// @brief Field exception, offset: 0x30, size: 0x8, def value: None
  ::System::Exception* exception;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24, diagnosticName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24, exception) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
// Type: ::<GetOrCreateDiagnosticsAsync>d__26
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: ::CoreDiagnostics::<GetOrCreateDiagnosticsAsync>d__26
struct CORDL_TYPE __CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x266f8e4, size 0x474, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x266fd58, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Core::Internal::CoreDiagnostics*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr __CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*> __t__builder,
      ::Unity::Services::Core::Internal::CoreDiagnostics* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Internal::CoreDiagnostics* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*> __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26, __u__2) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
// Type: Unity.Services.Core.Internal::CoreDiagnostics
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::CoreDiagnostics*
class CORDL_TYPE CoreDiagnostics : public ::System::Object {
public:
  // Declarations
  using _GetOrCreateDiagnosticsAsync_d__26 = ::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26;

  using _SendCoreDiagnosticsAsync_d__24 = ::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24;

  __declspec(property(get = get_CoreTags))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* CoreTags;

  __declspec(property(get = get_Diagnostics, put = set_Diagnostics))::Unity::Services::Core::Telemetry::Internal::IDiagnostics* Diagnostics;

  __declspec(property(get = get_DiagnosticsComponentProvider,
                      put = set_DiagnosticsComponentProvider))::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* DiagnosticsComponentProvider;

  /// @brief Field <CoreTags>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__CoreTags_k__BackingField,
                      put = __cordl_internal_set__CoreTags_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _CoreTags_k__BackingField;

  /// @brief Field <DiagnosticsComponentProvider>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__DiagnosticsComponentProvider_k__BackingField, put = __cordl_internal_set__DiagnosticsComponentProvider_k__BackingField))::Unity::Services::Core::
      Telemetry::Internal::IDiagnosticsComponentProvider* _DiagnosticsComponentProvider_k__BackingField;

  /// @brief Field <Diagnostics>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Diagnostics_k__BackingField,
                      put = __cordl_internal_set__Diagnostics_k__BackingField))::Unity::Services::Core::Telemetry::Internal::IDiagnostics* _Diagnostics_k__BackingField;

  /// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Instance_k__BackingField, put = setStaticF__Instance_k__BackingField))::Unity::Services::Core::Internal::CoreDiagnostics* _Instance_k__BackingField;

  /// @brief Method GetOrCreateDiagnosticsAsync, addr 0x266f4e8, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>* GetOrCreateDiagnosticsAsync();

  static inline ::Unity::Services::Core::Internal::CoreDiagnostics* New_ctor();

  /// @brief Method OnSendFailed, addr 0x266f4cc, size 0x1c, virtual false, abstract: false, final false
  static inline void OnSendFailed(::System::Threading::Tasks::Task* failedSendTask);

  /// @brief Method SendCircularDependencyDiagnostics, addr 0x266f1a4, size 0xc4, virtual false, abstract: false, final false
  inline void SendCircularDependencyDiagnostics(::System::Exception* exception);

  /// @brief Method SendCoreDiagnosticsAsync, addr 0x266f268, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SendCoreDiagnosticsAsync(::StringW diagnosticName, ::System::Exception* exception);

  /// @brief Method SendCorePackageInitDiagnostics, addr 0x266f344, size 0xc4, virtual false, abstract: false, final false
  inline void SendCorePackageInitDiagnostics(::System::Exception* exception);

  /// @brief Method SendOperateServicesInitDiagnostics, addr 0x266f408, size 0xc4, virtual false, abstract: false, final false
  inline void SendOperateServicesInitDiagnostics(::System::Exception* exception);

  /// @brief Method SetProjectConfiguration, addr 0x266f0dc, size 0xc8, virtual false, abstract: false, final false
  inline void SetProjectConfiguration(::StringW serializedProjectConfig);

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__CoreTags_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__CoreTags_k__BackingField() const;

  constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*& __cordl_internal_get__DiagnosticsComponentProvider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*> const&
  __cordl_internal_get__DiagnosticsComponentProvider_k__BackingField() const;

  constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnostics*& __cordl_internal_get__Diagnostics_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*> const& __cordl_internal_get__Diagnostics_k__BackingField() const;

  constexpr void __cordl_internal_set__CoreTags_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__DiagnosticsComponentProvider_k__BackingField(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* value);

  constexpr void __cordl_internal_set__Diagnostics_k__BackingField(::Unity::Services::Core::Telemetry::Internal::IDiagnostics* value);

  /// @brief Method .ctor, addr 0x266f5dc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Services::Core::Internal::CoreDiagnostics* getStaticF__Instance_k__BackingField();

  /// @brief Method get_CoreTags, addr 0x266f0b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_CoreTags();

  /// @brief Method get_Diagnostics, addr 0x266f0cc, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Telemetry::Internal::IDiagnostics* get_Diagnostics();

  /// @brief Method get_DiagnosticsComponentProvider, addr 0x266f0bc, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* get_DiagnosticsComponentProvider();

  /// @brief Method get_Instance, addr 0x266f020, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Internal::CoreDiagnostics* get_Instance();

  static inline void setStaticF__Instance_k__BackingField(::Unity::Services::Core::Internal::CoreDiagnostics* value);

  /// @brief Method set_Diagnostics, addr 0x266f0d4, size 0x8, virtual false, abstract: false, final false
  inline void set_Diagnostics(::Unity::Services::Core::Telemetry::Internal::IDiagnostics* value);

  /// @brief Method set_DiagnosticsComponentProvider, addr 0x266f0c4, size 0x8, virtual false, abstract: false, final false
  inline void set_DiagnosticsComponentProvider(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* value);

  /// @brief Method set_Instance, addr 0x266f068, size 0x4c, virtual false, abstract: false, final false
  static inline void set_Instance(::Unity::Services::Core::Internal::CoreDiagnostics* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreDiagnostics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreDiagnostics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreDiagnostics(CoreDiagnostics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreDiagnostics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreDiagnostics(CoreDiagnostics const&) = delete;

  /// @brief Field <CoreTags>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____CoreTags_k__BackingField;

  /// @brief Field <DiagnosticsComponentProvider>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* ____DiagnosticsComponentProvider_k__BackingField;

  /// @brief Field <Diagnostics>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::IDiagnostics* ____Diagnostics_k__BackingField;

  /// @brief Field CircularDependencyDiagnosticName offset 0xffffffff size 0x8
  static constexpr ::ConstString CircularDependencyDiagnosticName{ u"circular_dependency" };

  /// @brief Field CorePackageInitDiagnosticName offset 0xffffffff size 0x8
  static constexpr ::ConstString CorePackageInitDiagnosticName{ u"core_package_init" };

  /// @brief Field CorePackageName offset 0xffffffff size 0x8
  static constexpr ::ConstString CorePackageName{ u"com.unity.services.core" };

  /// @brief Field OperateServicesInitDiagnosticName offset 0xffffffff size 0x8
  static constexpr ::ConstString OperateServicesInitDiagnosticName{ u"operate_services_init" };

  /// @brief Field ProjectConfigTagName offset 0xffffffff size 0x8
  static constexpr ::ConstString ProjectConfigTagName{ u"project_config" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CoreDiagnostics, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreDiagnostics, ____CoreTags_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreDiagnostics, ____DiagnosticsComponentProvider_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreDiagnostics, ____Diagnostics_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::CoreDiagnostics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CoreDiagnostics*, "Unity.Services.Core.Internal", "CoreDiagnostics");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__CoreDiagnostics___GetOrCreateDiagnosticsAsync_d__26, "Unity.Services.Core.Internal", "CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__CoreDiagnostics___SendCoreDiagnosticsAsync_d__24, "Unity.Services.Core.Internal", "CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24");
