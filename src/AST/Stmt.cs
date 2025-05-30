// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------

using System;
using System.Collections.Generic;

namespace CppSharp.AST
{
    public enum StmtClass
    {
        NoStmt = 0,
        GCCAsmStmt = 1,
        MSAsmStmt = 2,
        BreakStmt = 3,
        CXXCatchStmt = 4,
        CXXForRangeStmt = 5,
        CXXTryStmt = 6,
        CapturedStmt = 7,
        CompoundStmt = 8,
        ContinueStmt = 9,
        CoreturnStmt = 10,
        CoroutineBodyStmt = 11,
        DeclStmt = 12,
        DoStmt = 13,
        ForStmt = 14,
        GotoStmt = 15,
        IfStmt = 16,
        IndirectGotoStmt = 17,
        MSDependentExistsStmt = 18,
        NullStmt = 19,
        ReturnStmt = 99,
        SEHExceptStmt = 100,
        SEHFinallyStmt = 101,
        SEHLeaveStmt = 102,
        SEHTryStmt = 103,
        CaseStmt = 104,
        DefaultStmt = 105,
        SwitchStmt = 106,
        AttributedStmt = 107,
        BinaryConditionalOperator = 108,
        ConditionalOperator = 109,
        AddrLabelExpr = 110,
        ArrayInitIndexExpr = 111,
        ArrayInitLoopExpr = 112,
        ArraySubscriptExpr = 113,
        ArrayTypeTraitExpr = 114,
        AsTypeExpr = 115,
        AtomicExpr = 116,
        BinaryOperator = 117,
        CompoundAssignOperator = 118,
        BlockExpr = 119,
        CXXBindTemporaryExpr = 120,
        CXXBoolLiteralExpr = 121,
        CXXConstructExpr = 122,
        CXXTemporaryObjectExpr = 123,
        CXXDefaultArgExpr = 124,
        CXXDefaultInitExpr = 125,
        CXXDeleteExpr = 126,
        CXXDependentScopeMemberExpr = 127,
        CXXFoldExpr = 128,
        CXXInheritedCtorInitExpr = 129,
        CXXNewExpr = 130,
        CXXNoexceptExpr = 131,
        CXXNullPtrLiteralExpr = 132,
        CXXParenListInitExpr = 133,
        CXXPseudoDestructorExpr = 134,
        CXXRewrittenBinaryOperator = 135,
        CXXScalarValueInitExpr = 136,
        CXXStdInitializerListExpr = 137,
        CXXThisExpr = 138,
        CXXThrowExpr = 139,
        CXXTypeidExpr = 140,
        CXXUnresolvedConstructExpr = 141,
        CXXUuidofExpr = 142,
        CallExpr = 143,
        CUDAKernelCallExpr = 144,
        CXXMemberCallExpr = 145,
        CXXOperatorCallExpr = 146,
        UserDefinedLiteral = 147,
        BuiltinBitCastExpr = 148,
        CStyleCastExpr = 149,
        CXXFunctionalCastExpr = 150,
        CXXAddrspaceCastExpr = 151,
        CXXConstCastExpr = 152,
        CXXDynamicCastExpr = 153,
        CXXReinterpretCastExpr = 154,
        CXXStaticCastExpr = 155,
        ImplicitCastExpr = 157,
        CharacterLiteral = 158,
        ChooseExpr = 159,
        CompoundLiteralExpr = 160,
        ConceptSpecializationExpr = 161,
        ConvertVectorExpr = 162,
        CoawaitExpr = 163,
        CoyieldExpr = 164,
        DeclRefExpr = 165,
        DependentCoawaitExpr = 166,
        DependentScopeDeclRefExpr = 167,
        DesignatedInitExpr = 168,
        DesignatedInitUpdateExpr = 169,
        ExpressionTraitExpr = 170,
        ExtVectorElementExpr = 171,
        FixedPointLiteral = 172,
        FloatingLiteral = 173,
        ConstantExpr = 174,
        ExprWithCleanups = 175,
        FunctionParmPackExpr = 176,
        GNUNullExpr = 177,
        GenericSelectionExpr = 178,
        ImaginaryLiteral = 179,
        ImplicitValueInitExpr = 180,
        InitListExpr = 181,
        IntegerLiteral = 182,
        LambdaExpr = 183,
        MSPropertyRefExpr = 184,
        MSPropertySubscriptExpr = 185,
        MaterializeTemporaryExpr = 186,
        MatrixSubscriptExpr = 187,
        MemberExpr = 188,
        NoInitExpr = 189,
        OffsetOfExpr = 208,
        OpaqueValueExpr = 209,
        UnresolvedLookupExpr = 210,
        UnresolvedMemberExpr = 211,
        PackExpansionExpr = 212,
        ParenExpr = 213,
        ParenListExpr = 214,
        PredefinedExpr = 215,
        PseudoObjectExpr = 216,
        RecoveryExpr = 217,
        RequiresExpr = 218,
        SYCLUniqueStableNameExpr = 219,
        ShuffleVectorExpr = 220,
        SizeOfPackExpr = 221,
        SourceLocExpr = 222,
        StmtExpr = 223,
        StringLiteral = 224,
        SubstNonTypeTemplateParmExpr = 225,
        SubstNonTypeTemplateParmPackExpr = 226,
        TypeTraitExpr = 227,
        TypoExpr = 228,
        UnaryExprOrTypeTraitExpr = 229,
        UnaryOperator = 230,
        VAArgExpr = 231,
        LabelStmt = 232,
        WhileStmt = 233,
    }

    public enum IfStatementKind : uint
    {
        Ordinary = 0,
        Constexpr = 1,
        ConstevalNonNegated = 2,
        ConstevalNegated = 3
    }

    public abstract partial class Stmt
    {
        public enum Likelihood
        {
            /// <summary>Branch has the [[unlikely]] attribute.</summary>
            Unlikely = -1,
            /// <summary>
            /// <para>No attribute set or branches of the IfStmt have</para>
            /// <para>the same attribute.</para>
            /// </summary>
            None = 0,
            /// <summary>Branch has the [[likely]] attribute.</summary>
            Likely = 1
        }

        public Stmt()
        {
        }

        public SourceRange SourceRange { get; set; }
        public SourceLocation BeginLoc { get; set; }
        public SourceLocation EndLoc { get; set; }

        public abstract T Visit<T>(IStmtVisitor<T> visitor);
    }

    public partial class DeclStmt : Stmt
    {
        public DeclStmt()
        {
        }

        public List<Declaration> Decls { get; private set; } = new List<Declaration>();
        public bool IsSingleDecl { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitDeclStmt(this);
    }

    public partial class NullStmt : Stmt
    {
        public NullStmt()
        {
        }

        public SourceLocation SemiLoc { get; set; }
        public bool HasLeadingEmptyMacro { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitNullStmt(this);
    }

    public partial class CompoundStmt : Stmt
    {
        public CompoundStmt()
        {
        }

        public List<Stmt> Body { get; private set; } = new List<Stmt>();
        public bool BodyEmpty { get; set; }
        public uint Size { get; set; }
        public bool HasStoredFPFeatures { get; set; }
        public SourceLocation LBracLoc { get; set; }
        public SourceLocation RBracLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitCompoundStmt(this);
    }

    public abstract partial class SwitchCase : Stmt
    {
        public SwitchCase()
        {
        }

        public SourceLocation KeywordLoc { get; set; }
        public SourceLocation ColonLoc { get; set; }
    }

    public partial class CaseStmt : SwitchCase
    {
        public CaseStmt()
        {
        }

        public bool CaseStmtIsGNURange { get; set; }
        public SourceLocation CaseLoc { get; set; }
        public SourceLocation EllipsisLoc { get; set; }
        public Expr LHS { get; set; }
        public Expr RHS { get; set; }
        public Stmt SubStmt { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitCaseStmt(this);
    }

    public partial class DefaultStmt : SwitchCase
    {
        public DefaultStmt()
        {
        }

        public Stmt SubStmt { get; set; }
        public SourceLocation DefaultLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitDefaultStmt(this);
    }

    public abstract partial class ValueStmt : Stmt
    {
        public ValueStmt()
        {
        }

    }

    public partial class LabelStmt : ValueStmt
    {
        public LabelStmt()
        {
        }

        public SourceLocation IdentLoc { get; set; }
        public string Name { get; set; }
        public Stmt SubStmt { get; set; }
        public bool SideEntry { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitLabelStmt(this);
    }

    public partial class AttributedStmt : ValueStmt
    {
        public AttributedStmt()
        {
        }

        public SourceLocation AttrLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitAttributedStmt(this);
    }

    public partial class IfStmt : Stmt
    {
        public IfStmt()
        {
        }

        public bool HasInitStorage { get; set; }
        public bool HasVarStorage { get; set; }
        public bool HasElseStorage { get; set; }
        public Expr Cond { get; set; }
        public Stmt Then { get; set; }
        public Stmt Else { get; set; }
        public DeclStmt ConditionVariableDeclStmt { get; set; }
        public Stmt Init { get; set; }
        public SourceLocation IfLoc { get; set; }
        public SourceLocation ElseLoc { get; set; }
        public bool IsConsteval { get; set; }
        public bool IsNonNegatedConsteval { get; set; }
        public bool IsNegatedConsteval { get; set; }
        public bool IsConstexpr { get; set; }
        public IfStatementKind StatementKind { get; set; }
        public bool IsObjCAvailabilityCheck { get; set; }
        public SourceLocation LParenLoc { get; set; }
        public SourceLocation RParenLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitIfStmt(this);
    }

    public partial class SwitchStmt : Stmt
    {
        public SwitchStmt()
        {
        }

        public bool HasInitStorage { get; set; }
        public bool HasVarStorage { get; set; }
        public Expr Cond { get; set; }
        public Stmt Body { get; set; }
        public Stmt Init { get; set; }
        public DeclStmt ConditionVariableDeclStmt { get; set; }
        public SourceLocation SwitchLoc { get; set; }
        public SourceLocation LParenLoc { get; set; }
        public SourceLocation RParenLoc { get; set; }
        public bool IsAllEnumCasesCovered { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitSwitchStmt(this);
    }

    public partial class WhileStmt : Stmt
    {
        public WhileStmt()
        {
        }

        public bool HasVarStorage { get; set; }
        public Expr Cond { get; set; }
        public Stmt Body { get; set; }
        public DeclStmt ConditionVariableDeclStmt { get; set; }
        public SourceLocation WhileLoc { get; set; }
        public SourceLocation LParenLoc { get; set; }
        public SourceLocation RParenLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitWhileStmt(this);
    }

    public partial class DoStmt : Stmt
    {
        public DoStmt()
        {
        }

        public Expr Cond { get; set; }
        public Stmt Body { get; set; }
        public SourceLocation DoLoc { get; set; }
        public SourceLocation WhileLoc { get; set; }
        public SourceLocation RParenLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitDoStmt(this);
    }

    public partial class ForStmt : Stmt
    {
        public ForStmt()
        {
        }

        public Stmt Init { get; set; }
        public DeclStmt ConditionVariableDeclStmt { get; set; }
        public Expr Cond { get; set; }
        public Expr Inc { get; set; }
        public Stmt Body { get; set; }
        public SourceLocation ForLoc { get; set; }
        public SourceLocation LParenLoc { get; set; }
        public SourceLocation RParenLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitForStmt(this);
    }

    public partial class GotoStmt : Stmt
    {
        public GotoStmt()
        {
        }

        public SourceLocation GotoLoc { get; set; }
        public SourceLocation LabelLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitGotoStmt(this);
    }

    public partial class IndirectGotoStmt : Stmt
    {
        public IndirectGotoStmt()
        {
        }

        public SourceLocation GotoLoc { get; set; }
        public SourceLocation StarLoc { get; set; }
        public Expr Target { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitIndirectGotoStmt(this);
    }

    public partial class ContinueStmt : Stmt
    {
        public ContinueStmt()
        {
        }

        public SourceLocation ContinueLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitContinueStmt(this);
    }

    public partial class BreakStmt : Stmt
    {
        public BreakStmt()
        {
        }

        public SourceLocation BreakLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitBreakStmt(this);
    }

    public partial class ReturnStmt : Stmt
    {
        public ReturnStmt()
        {
        }

        public Expr RetValue { get; set; }
        public SourceLocation ReturnLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitReturnStmt(this);
    }

    public abstract partial class AsmStmt : Stmt
    {
        public AsmStmt()
        {
        }

        public List<Expr> Inputs { get; private set; } = new List<Expr>();
        public List<Expr> Outputs { get; private set; } = new List<Expr>();
        public SourceLocation AsmLoc { get; set; }
        public bool Simple { get; set; }
        public bool Volatile { get; set; }
        public uint NumOutputs { get; set; }
        public uint NumPlusOperands { get; set; }
        public uint NumInputs { get; set; }
        public uint NumClobbers { get; set; }
    }

    public partial class GCCAsmStmt : AsmStmt
    {
        public partial class AsmStringPiece
        {
            public enum Kind
            {
                String = 0,
                Operand = 1
            }

            public AsmStringPiece()
            {
            }

            public bool IsString { get; set; }
            public bool IsOperand { get; set; }
            public string String { get; set; }
            public uint OperandNo { get; set; }
            public sbyte Modifier { get; set; }
        }

        public GCCAsmStmt()
        {
        }

        public List<AddrLabelExpr> Labels { get; private set; } = new List<AddrLabelExpr>();
        public SourceLocation RParenLoc { get; set; }
        public bool IsAsmGoto { get; set; }
        public uint NumLabels { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitGCCAsmStmt(this);
    }

    public partial class MSAsmStmt : AsmStmt
    {
        public MSAsmStmt()
        {
        }

        public SourceLocation LBraceLoc { get; set; }
        public bool HasBraces { get; set; }
        public uint NumAsmToks { get; set; }
        public string AsmString { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitMSAsmStmt(this);
    }

    public partial class SEHExceptStmt : Stmt
    {
        public SEHExceptStmt()
        {
        }

        public SourceLocation ExceptLoc { get; set; }
        public Expr FilterExpr { get; set; }
        public CompoundStmt Block { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitSEHExceptStmt(this);
    }

    public partial class SEHFinallyStmt : Stmt
    {
        public SEHFinallyStmt()
        {
        }

        public SourceLocation FinallyLoc { get; set; }
        public CompoundStmt Block { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitSEHFinallyStmt(this);
    }

    public partial class SEHTryStmt : Stmt
    {
        public SEHTryStmt()
        {
        }

        public SourceLocation TryLoc { get; set; }
        public bool IsCXXTry { get; set; }
        public CompoundStmt TryBlock { get; set; }
        public Stmt Handler { get; set; }
        public SEHExceptStmt ExceptHandler { get; set; }
        public SEHFinallyStmt FinallyHandler { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitSEHTryStmt(this);
    }

    public partial class SEHLeaveStmt : Stmt
    {
        public SEHLeaveStmt()
        {
        }

        public SourceLocation LeaveLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitSEHLeaveStmt(this);
    }

    public partial class CapturedStmt : Stmt
    {
        public enum VariableCaptureKind
        {
            This = 0,
            ByRef = 1,
            ByCopy = 2,
            VLAType = 3
        }

        public partial class Capture
        {
            public Capture()
            {
            }

            public CapturedStmt.VariableCaptureKind CaptureKind { get; set; }
            public SourceLocation Location { get; set; }
            public bool CapturesThis { get; set; }
            public bool CapturesVariable { get; set; }
            public bool CapturesVariableByCopy { get; set; }
            public bool CapturesVariableArrayType { get; set; }
        }

        public CapturedStmt()
        {
        }

        public List<Expr> CaptureInits { get; private set; } = new List<Expr>();
        public uint CaptureSize { get; set; }
        public SourceRange SourceRange { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitCapturedStmt(this);
    }

    public partial class CXXCatchStmt : Stmt
    {
        public CXXCatchStmt()
        {
        }

        public SourceLocation CatchLoc { get; set; }
        public QualifiedType CaughtType { get; set; }
        public Stmt HandlerBlock { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitCXXCatchStmt(this);
    }

    public partial class CXXTryStmt : Stmt
    {
        public CXXTryStmt()
        {
        }

        public SourceLocation TryLoc { get; set; }
        public uint NumHandlers { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitCXXTryStmt(this);
    }

    public partial class CXXForRangeStmt : Stmt
    {
        public CXXForRangeStmt()
        {
        }

        public Stmt Init { get; set; }
        public Expr RangeInit { get; set; }
        public Expr Cond { get; set; }
        public Expr Inc { get; set; }
        public Stmt Body { get; set; }
        public SourceLocation ForLoc { get; set; }
        public SourceLocation CoawaitLoc { get; set; }
        public SourceLocation ColonLoc { get; set; }
        public SourceLocation RParenLoc { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitCXXForRangeStmt(this);
    }

    public partial class MSDependentExistsStmt : Stmt
    {
        public MSDependentExistsStmt()
        {
        }

        public SourceLocation KeywordLoc { get; set; }
        public bool IsIfExists { get; set; }
        public bool IsIfNotExists { get; set; }
        public CompoundStmt SubStmt { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitMSDependentExistsStmt(this);
    }

    public partial class CoroutineBodyStmt : Stmt
    {
        internal enum SubStmt
        {
            /// <summary>The body of the coroutine.</summary>
            Body = 0,
            /// <summary>The promise statement.</summary>
            Promise = 1,
            /// <summary>The initial suspend statement, run before the body.</summary>
            InitSuspend = 2,
            /// <summary>The final suspend statement, run after the body.</summary>
            FinalSuspend = 3,
            /// <summary>Handler for exceptions thrown in the body.</summary>
            OnException = 4,
            /// <summary>Handler for control flow falling off the body.</summary>
            OnFallthrough = 5,
            /// <summary>Coroutine frame memory allocation.</summary>
            Allocate = 6,
            /// <summary>Coroutine frame memory deallocation.</summary>
            Deallocate = 7,
            /// <summary>Declaration holding the result of get_return_object.</summary>
            ResultDecl = 8,
            /// <summary>Return value for thunk function: p.get_return_object().</summary>
            ReturnValue = 9,
            /// <summary>Return statement for the thunk function.</summary>
            ReturnStmt = 10,
            /// <summary>Return statement if allocation failed.</summary>
            ReturnStmtOnAllocFailure = 11,
            /// <summary>First offset for move construction of parameter copies.</summary>
            FirstParamMove = 12
        }

        public partial class CtorArgs
        {
            public CtorArgs()
            {
            }

        }

        public CoroutineBodyStmt()
        {
        }

        public List<Stmt> ChildrenExclBody { get; private set; } = new List<Stmt>();
        public bool HasDependentPromiseType { get; set; }
        public CompoundStmt Body { get; set; }
        public Stmt PromiseDeclStmt { get; set; }
        public Stmt InitSuspendStmt { get; set; }
        public Stmt FinalSuspendStmt { get; set; }
        public Stmt ExceptionHandler { get; set; }
        public Stmt FallthroughHandler { get; set; }
        public Expr Allocate { get; set; }
        public Expr Deallocate { get; set; }
        public Stmt ResultDecl { get; set; }
        public Expr ReturnValueInit { get; set; }
        public Expr ReturnValue { get; set; }
        public Stmt ReturnStmt { get; set; }
        public Stmt ReturnStmtOnAllocFailure { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitCoroutineBodyStmt(this);
    }

    public partial class CoreturnStmt : Stmt
    {
        internal enum SubStmt
        {
            Operand = 0,
            PromiseCall = 1,
            Count = 2
        }

        public CoreturnStmt()
        {
        }

        public SourceLocation KeywordLoc { get; set; }
        public Expr Operand { get; set; }
        public Expr PromiseCall { get; set; }
        public bool IsImplicit { get; set; }

        public override T Visit<T>(IStmtVisitor<T> visitor) =>
            visitor.VisitCoreturnStmt(this);
    }
}
