#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RuntimePipelineCustomizerRegistry)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime::Internal {
class IRuntimePipelineCustomizer;
}
namespace Amazon::Runtime::Internal {
class RuntimePipeline;
}
namespace Amazon::Runtime::Internal {
class __RuntimePipelineCustomizerRegistry____c__DisplayClass7_0;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class RuntimePipelineCustomizerRegistry;
}
namespace Amazon::Runtime::Internal {
class __RuntimePipelineCustomizerRegistry____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0);
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::RuntimePipelineCustomizerRegistry::<>c__DisplayClass7_0*
class CORDL_TYPE __RuntimePipelineCustomizerRegistry____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field customizer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_customizer, put = __cordl_internal_set_customizer))::Amazon::Runtime::Internal::IRuntimePipelineCustomizer* customizer;

  static inline ::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0* New_ctor();

  /// @brief Method <Register>b__0, addr 0x23db534, size 0x114, virtual false, abstract: false, final false
  inline bool _Register_b__0(::Amazon::Runtime::Internal::IRuntimePipelineCustomizer* x);

  constexpr ::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*& __cordl_internal_get_customizer();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*> const& __cordl_internal_get_customizer() const;

  constexpr void __cordl_internal_set_customizer(::Amazon::Runtime::Internal::IRuntimePipelineCustomizer* value);

  /// @brief Method .ctor, addr 0x23daa28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimePipelineCustomizerRegistry____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimePipelineCustomizerRegistry____c__DisplayClass7_0(__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimePipelineCustomizerRegistry____c__DisplayClass7_0(__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0 const&) = delete;

  /// @brief Field customizer, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::IRuntimePipelineCustomizer* ___customizer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0, ___customizer) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::RuntimePipelineCustomizerRegistry
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::RuntimePipelineCustomizerRegistry*
class CORDL_TYPE RuntimePipelineCustomizerRegistry : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0;

  /// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Instance_k__BackingField,
                             put = setStaticF__Instance_k__BackingField))::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry* _Instance_k__BackingField;

  /// @brief Field _customizers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__customizers,
                      put = __cordl_internal_set__customizers))::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>* _customizers;

  /// @brief Field _logger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Field _rwlock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rwlock, put = __cordl_internal_set__rwlock))::System::Threading::ReaderWriterLockSlim* _rwlock;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ApplyCustomizations, addr 0x23daf14, size 0x52c, virtual false, abstract: false, final false
  inline void ApplyCustomizations(::System::Type* type, ::Amazon::Runtime::Internal::RuntimePipeline* pipeline);

  /// @brief Method Deregister, addr 0x23daa30, size 0xac, virtual false, abstract: false, final false
  inline void Deregister(::Amazon::Runtime::Internal::IRuntimePipelineCustomizer* customizer);

  /// @brief Method Deregister, addr 0x23daadc, size 0x438, virtual false, abstract: false, final false
  inline void Deregister(::StringW uniqueName);

  /// @brief Method Dispose, addr 0x23db440, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x23db4ac, size 0x28, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry* New_ctor();

  /// @brief Method Register, addr 0x23da610, size 0x418, virtual false, abstract: false, final false
  inline void Register(::Amazon::Runtime::Internal::IRuntimePipelineCustomizer* customizer);

  constexpr ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>*& __cordl_internal_get__customizers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>*> const& __cordl_internal_get__customizers() const;

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr ::System::Threading::ReaderWriterLockSlim*& __cordl_internal_get__rwlock();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& __cordl_internal_get__rwlock() const;

  constexpr void __cordl_internal_set__customizers(::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>* value);

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  constexpr void __cordl_internal_set__rwlock(::System::Threading::ReaderWriterLockSlim* value);

  /// @brief Method .ctor, addr 0x23da4d8, size 0x138, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry* getStaticF__Instance_k__BackingField();

  /// @brief Method get_Instance, addr 0x23da480, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry* get_Instance();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__Instance_k__BackingField(::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePipelineCustomizerRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimePipelineCustomizerRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimePipelineCustomizerRegistry(RuntimePipelineCustomizerRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimePipelineCustomizerRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimePipelineCustomizerRegistry(RuntimePipelineCustomizerRegistry const&) = delete;

  /// @brief Field _logger, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  /// @brief Field _rwlock, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLockSlim* ____rwlock;

  /// @brief Field _customizers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>* ____customizers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry, ____logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry, ____rwlock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry, ____customizers) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*, "Amazon.Runtime.Internal", "RuntimePipelineCustomizerRegistry");
NEED_NO_BOX(::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0*, "Amazon.Runtime.Internal", "RuntimePipelineCustomizerRegistry/<>c__DisplayClass7_0");
